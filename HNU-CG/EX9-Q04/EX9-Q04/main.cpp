//
//  main.cpp
//  EX9-Q04 火星人足球赛
//
//  Created by Rain Chen on 2021/12/7.
//

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
struct Mars {
    int time;
    char team;
    int m;
    char color;
};

int main() {
    string name1;
    string name2;
    int n = 0;
    cin >> name1 >> name2 >> n;
    Mars ftball[90];
    for (int i = 0; i < n; i++) {
        cin >> ftball[i].time >> ftball[i].team;
        cin >> ftball[i].m >> ftball[i].color;
    }
    int cred = 0;
    for (int i = 0; i < n; i++) {
        if (ftball[i].color == 'r') {
            cred++;
            if (ftball[i].team == 'h') {
                cout << name1 << " " << ftball[i].m << " " << ftball[i].time;
                cout << endl;
            } else {
                cout << name2 << " " << ftball[i].m << " " << ftball[i].time;
                cout << endl;
            }
        } else {
            continue;
        }
    }
    if (cred == 0) {
        cout << "No Red Card" << endl;
    }
    return 0;
}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//class player {
//public:
//    char team;
//    int id;
//    int time;
//    player(char a_team, int a_id, int a_time): team(a_team), id(a_id), time(a_time) {}
//    bool operator == (player& p) {
//        return this->team == p.team && this->id == p.id;
//    }
//};
//
//bool myfind(vector<player>a, player target) {
//    for (auto it:a) {
//        if (it == target) {
//            return true;
//        }
//    }
//    return false;
//}
//
//int main() {
//    pair<string, vector<player>> h;
//    pair<string, vector<player>> a;
//    cin >> h.first >> a.first;
//    vector<player> th;
//    vector<player> ta;
//    int n;
//    cin >> n;
//    while (n--) {
//        int a_time;
//        char a_team;
//        int a_id;
//        char jd;
//        cin >> a_time >> a_team >> a_id >> jd;
//        player tmp(a_team, a_id, a_time);
//        if (jd == 'r') {
//            if (tmp.team == 'h') {
//                h.second.emplace_back(tmp);
//            } else {
//                a.second.emplace_back(tmp);
//            }
//        } else {
//            if (tmp.team == 'h') {
//                if (myfind(th, tmp)) {
//                    h.second.emplace_back(tmp);
//                } else {
//                    th.emplace_back(tmp);
//                }
//            } else {
//                if (myfind(ta, tmp)) {
//                    a.second.emplace_back(tmp);
//                } else {
//                    ta.emplace_back(tmp);
//                }
//            }
//        }
//    }
//    if (h.second.empty() && a.second.empty()) {
//        cout << "No Red Card" << endl;
//    } else {
//        sort(h.second.begin(), h.second.end(), [&](player p1, player p2) {
//            if (p1.time != p2.time) {
//                return p1.time < p2.time;
//            } else {
//                return p1.id > p2.id;
//            }
//        });
//        sort(a.second.begin(), a.second.end(), [&](player p1, player p2) {
//            if (p1.time != p2.time) {
//                return p1.time < p2.time;
//            } else {
//                return p1.id > p2.id;
//            }
//        });
//    }
//    for (auto it:h.second) {
//        cout << a.first << " " << it.id << " " << it.time << endl;
//    }
//    for (auto it:a.second) {
//        cout << a.first << " " << it.id << " " << it.time << endl;
//    }
//    return 0;
//}
