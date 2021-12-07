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
