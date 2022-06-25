// t01p19

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct People {
    char id[19]{};
    int social{};
    int area{};
    char date[11]{};
};

struct Human {
    string name;
    int months{};
    int s{};
    int time{};
    int rank{};
    int has_house{};
    int remain{};

    Human() {
        has_house = 1;
    }
};

bool cmp(const Human &a, const Human &b) {
    if (a.has_house != b.has_house) {
        return a.has_house > b.has_house;
    }
    if (a.s == 0 && b.s == 0) {
        if (a.months > b.months) {
            return a.months > b.months;
        } else {
            return a.time < b.time;
        }
    }
    if (a.s != b.s) {
        return a.s < b.s;
    } else {
        return a.time < b.time;
    }
}

People *get_mess(int &n) {
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

int main() {
    People *person;
    int n = 0;
    person = get_mess(n);
    int no_house = 0;
    auto *h = new Human[n];
    for (int i = 0; i < n; ++i) {
        h[i].name = person[i].id;
        h[i].months = person[i].social;
        h[i].s = person[i].area;
        if (h[i].s == 0 && h[i].months <= 24) {
            h[i].has_house = 0;
            no_house++;
        }
        string tmp = person[i].date;
        h[i].time = (tmp[0] - '0') * 10 * 30
                    + (tmp[1] - '0') * 30
                    + (tmp[3] - '0') * 10
                    + (tmp[4] - '0')
                    + (tmp[6] - '0') * 1000 * 365
                    + (tmp[7] - '0') * 100 * 365
                    + (tmp[8] - '0') * 10 * 365
                    + (tmp[9] - '0') * 1 * 365;
    }
    sort(&h[0], &h[n], cmp);
    // input
    int m = 0, t = 0;
    cin >> m >> t;
    int num = n - no_house;
    for (int i = 0; i < num; ++i) {
        h[i].rank = i + 1;
        if (i > 0) {
            if (h[i].s == 0 && h[i - 1].s == 0) {
                if (h[i].months == h[i - 1].months && h[i].time == h[i - 1].time) {
                    h[i].rank = h[i - 1].rank;
                }
            } else if (h[i].s == h[i - 1].s && h[i].s != 0 && h[i - 1].s != 0) {
                if (h[i].time == h[i - 1].time) {
                    h[i].rank = h[i - 1].rank;
                }
            }
        }
    }
    for (int i = 0; i < num; ++i) {
        h[i].remain = n - 1;
    }
    while (t--) {
        string a_name;
        cin >> a_name;
        int pos = 0;
        for (int i = 0; i < n; ++i) {
            if (h[i].name == a_name) {
                pos = i;
                break;
            }
        }
        if (h[pos].has_house == 0) {
            cout << "Sorry" << endl;
        } else {
            int num_house = 0;
            int num_same_rank = -1;
            for (int i = pos; i < num; ++i) {
                if (h[i].rank == h[pos].rank) {
                    break;
                } else {
                    num_same_rank++;
                }
            }
            for (int i = pos; i >= 0; i--) {
                if (h[i].rank == h[pos].rank) {
                    num_house = h[i].remain;
                    num_same_rank++;
                } else {
                    break;
                }
            }
            if (num_same_rank == 1) {
                if (num_house <= 0) {
                    cout << "Sorry" << endl;
                } else {
                    cout << h[pos].rank << endl;
                }
            } else {
                if (num_house <= 0) {
                    cout << "Sorry" << endl;
                } else if (num_house >= num_same_rank) {
                    cout << h[pos].rank << " " << h[pos].rank + num_same_rank << endl;
                } else {
                    cout << num_house << "/" << num_same_rank << endl;
                }
            }
        }
    }
    return 0;
}
