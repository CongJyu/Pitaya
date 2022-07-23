// p0118

#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

struct Competitor {
    int score{};
    int maps[101]{};
    string name;
};

bool cmp1(const Competitor &a, const Competitor &b) {
    if (a.score != b.score) {
        return a.score > b.score;
    } else {
        for (int i{1}; i < 101; ++i) {
            if (a.maps[i] != b.maps[i]) {
                return a.maps[i] > b.maps[i];
            }
        }
    }
    return -1;
}

bool cmp2(const Competitor &a, const Competitor &b) {
    if (a.maps[1] != b.maps[1]) {
        return a.maps[1] > b.maps[1];
    } else if (a.score != b.score) {
        return a.score > b.score;
    } else {
        for (int i{2}; i < 101; ++i) {
            if (a.maps[i] != b.maps[i]) {
                return a.maps[i] > b.maps[i];
            }
        }
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    int tag{}, tmp;
    string name;
    Competitor c[100];
    unordered_map<string, int> mp;
    unordered_map<int, int> score{
            {1,  25},
            {2,  18},
            {3,  15},
            {4,  12},
            {5,  10},
            {6,  8},
            {7,  6},
            {8,  4},
            {9,  2},
            {10, 1}
    };
    int t{};
    cin >> t;
    for (int i{}; i < t; ++i) {
        int n{};
        cin >> n;
        for (int j{1}; j <= n; ++j) {
            cin >> name;
            if (mp.find(name) == mp.end()) {
                c[tag].name = name;
                mp[name] = tag++;
            }
            tmp = mp[name];
            c[tmp].maps[j]++;
            if (j <= 10) {
                c[tmp].score += score[j];
            }
        }
    }
    sort(c, c + tag, cmp1);
    cout << c[0].name << endl;
    sort(c, c + tag, cmp2);
    cout << c[0].name << endl;
    return 0;
}
