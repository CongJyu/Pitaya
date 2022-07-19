// t01p18

#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

struct competitor {
    int score = 0;
    int maps[101];
    string name;
};

bool cmp1(const competitor &a, const competitor &b) {
    if (a.score != b.score) {
        return a.score > b.score;
    } else {
        for (int i = 1; i < 101; ++i) {
            if (a.maps[i] != b.maps[i]) {
                return a.maps[i] > b.maps[i];
            }
        }
    }
    return -1;
}

bool cmp2(const competitor &a, const competitor &b) {
    if (a.maps[1] != b.maps[1]) {
        return a.maps[1] > b.maps[1];
    } else if (a.score != b.score) {
        return a.score > b.score;
    } else {
        for (int i = 2; i < 101; ++i) {
            if (a.maps[i] != b.maps[i]) {
                return a.maps[i] > b.maps[i];
            }
        }
    }
    return -1;
}

int main() {
    // pre process
    int tag = 0, tmp;
    string name;
    competitor comp[100];
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
    int t = 0;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n = 0;
        cin >> n;
        for (int j = 1; j <= n; ++j) {
            cin >> name;
            if (mp.find(name) == mp.end()) {
                comp[tag].name = name;
                mp[name] = tag++;
            }
            tmp = mp[name];
            comp[tmp].maps[j]++;
            if (j <= 10) {
                comp[tmp].score += score[j];
            }
        }
    }
    sort(comp, comp + tag, cmp1);
    cout << comp[0].name << endl;
    sort(comp, comp + tag, cmp2);
    cout << comp[0].name << endl;
    return 0;
}
