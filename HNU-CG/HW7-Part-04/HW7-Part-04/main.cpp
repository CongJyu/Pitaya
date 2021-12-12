//
//  main.cpp
//  HW7-Part-04 结构体数组实现学生平均成绩计算并输出
//
//  Created by Rain Chen on 2021/12/12.
//

#include <iostream>
#include <iomanip>
using namespace std;

struct Student {
    string name;
    float mid_score;
    float end_score;
    float avg_score;
};

int main() {
    int n;
    cin >> n;
    Student * ss = new Student [n];
    for (int i = 0; i < n; i++) {
        cin >> ss[i].name;
        cin >> ss[i].mid_score;
        cin >> ss[i].end_score;
        ss[i].avg_score = (ss[i].mid_score + ss[i].end_score) / 2.0;
    }
    for (int i = 0; i < n; i++) {
        cout << ss[i].name << " " << fixed << setprecision(2) << ss[i].avg_score << endl;
    }
    return 0;
}
