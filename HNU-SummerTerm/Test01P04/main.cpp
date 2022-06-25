// 测试 1 问题 4

#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;
struct People {
    char id[19];
    int social;
    int area;
    char date[11];
};

bool compPrior(const pair<long long int, People> a, const pair<long long int, People> b);

People *getMess(int &n);

long long int getPriority(People &a);

int getDay(char date[]);

pair<long long int, People> p[100000];
int firstForSamePriority[100000], lastForSamePriority[100000];

int main() {
    People *person;
    int n;
    person = getMess(n);
    for (int i = 0; i < n; i++) {
        p[i].second = person[i];
        p[i].first = getPriority(person[i]);
    }
    delete[] person;
    stable_sort(p, p + n, compPrior);
    firstForSamePriority[0] = 0;
    for (int i = 1; i < n; i++) {
        if (p[i].first == p[i - 1].first) {
            firstForSamePriority[i] = firstForSamePriority[i - 1];
        } else {
            firstForSamePriority[i] = i;
        }
    }
    lastForSamePriority[n - 1] = n - 1;
    for (int i = n - 2; i >= 0; i--) {
        if (p[i].first == p[i + 1].first) {
            lastForSamePriority[i] = lastForSamePriority[i + 1];
        } else {
            lastForSamePriority[i] = i;
        }
    }
    int m, t, j;
    char id[19];
    cin >> m >> t;
    getchar();
    for (int i = 0; i < t; i++) {
        gets(id);
        for (j = 0; j < n; j++) {
            if (equal(p[j].second.id, p[j].second.id + 18, id)) {
                break;
            }
        }
        if (p[j].first == -1000000000000) {
            printf("Sorry\n");
            continue;
        }
        if (firstForSamePriority[j] >= m) {
            printf("Sorry");
            continue;
        }
        if (lastForSamePriority[j] < m) {
            if (firstForSamePriority[j] == lastForSamePriority[j]) {
                printf("%d\n", j + 1);
            } else {
                printf("%d %d\n", firstForSamePriority[j] + 1, lastForSamePriority[j] + 1);
            }
            continue;
        }
        printf("%d/%d\n", m - firstForSamePriority[j], lastForSamePriority[j] - firstForSamePriority[j] + 1);
    }
    return 0;
}

People *getMess(int &n) {
    FILE *fp;
    fp = fopen("house.bin", "rb");
    fseek(fp, -1 * (long) sizeof(int), 2);
    fread(&n, sizeof(int), 1, fp);
    rewind(fp);
    auto *tmp = new People[n];
    fread(tmp, sizeof(People), n, fp);
    fclose(fp);
    return tmp;
}

long long int getPriority(People &a) {
    int time = getDay(a.date);
    if (a.area == 0 && a.social > 24) {
        return a.social * 10000000000 - time;
    } else if (a.area > 0) {
        return -100000000 * a.area - time;
    } else {
        return -1000000000000;
    }
}

int getDay(char date[]) {
    for (int i = 0; i < 10; i++) {
        date[i] -= '0';
    }
    int year = date[6] * 1000 + date[7] * 100 + date[8] * 10 + date[9];
    int mon = date[3] * 10 + date[4];
    int day = date[0] * 100 + date[1] * 10 + date[2];
    return year * 365 + mon * 30 + day;
}

bool compPrior(const pair<long long int, People> a, const pair<long long int, People> b) {
    return a.first > b.first;
}
