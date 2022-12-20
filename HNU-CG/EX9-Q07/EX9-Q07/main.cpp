//
//  main.cpp
//  EX9-Q07 公共钥匙盒
//
//  Created by Rain Chen on 2021/12/7.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Event {
    int time;
    string condition;
    int key;
};

struct Teacher {
    int key;
    int start;
    int time;
};

bool cmp1(Event a, Event b) {
    if (a.time == b.time) {
        if (a.condition == b.condition) {
            return a.key < b.key;
        } else if (a.condition == "in") {
            return true;
        } else {
            return false;
        }
    } else {
        return a.time < b.time;
    }
}

int main() {
    int n = 0, k = 0;
    cin >> n >> k;
    int * location = new int [n];
    Event * e = new Event [2 * k];
    Teacher * t = new Teacher [k];
    for (int i = 0; i < n; i++) {
        location[i] = i + 1;
    }
    for (int i = 0; i < k; i++) {
        cin >> t[i].key >> t[i].start >> t[i].time;
        e[i].condition = "out";
        e[i].key = t[i].key;
        e[i].time = t[i].start;
        e[i + k].condition = "in";
        e[i + k].key = t[i].key;
        e[i + k].time = t[i].start + t[i].time;
    }
    sort(e, e + 2 * k, cmp1);
    for (int i = 0; i < 2 * k; i++) {
        if (e[i].condition == "out") {
            for (int j = 0; j < n; j++) {
                if (location[j] == e[i].key) {
                    location[j] = 0;
                    break;
                }
            }
        } else {
            for (int j = 0; j < n; j++) {
                if (location[j] == 0) {
                    location[j] = e[i].key;
                    break;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << location[i] << " ";
    }
    cout << endl;
    return 0;
}
