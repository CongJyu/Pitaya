//
//  main.cpp
//  EX9-Q01 评委打分
//
//  Created by Rain Chen on 2021/12/6.
//

#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

struct Competitors {
    string name;
    int score[9];
    int total;
};

bool cmp(Competitors a, Competitors b) {
    if (a.total != b.total) {
        return a.total > b.total;
    } else {
        return a.total < b.total;
    }
}

int main() {
    int n = 0;
    cin >> n;
    Competitors stu[100];
    for (int i = 0; i < 4; i++) {
        cin >> stu[i].name;
        stu[i].total = 0;
        for (int j = 0; j < 7; j++) {
            cin >> stu[i].score[j];
        }
        sort(stu[i].score, stu[i].score + 7);
        for (int k = 1; k < 7 - 1; k++) {
            stu[i].total += stu[i].score[k];
        }
    }
    sort(stu, stu + n, cmp);
    for (int i = 0; i < n; i++) {
        cout << stu[i].name << " " << stu[i].total << endl;
    }
    return 0;
}
