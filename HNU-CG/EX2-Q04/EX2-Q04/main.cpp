//
//  main.cpp
//  EX2-Q04 游泳训练时间计算
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
#include <iomanip>
int a, b, c, d, e, f;
char s1, s2, s3, s4;
int hour, minute, sec;
int main() {
    using namespace std;
    cin >> a >> s1 >> b >> s2 >> c >> d >> s3 >> e >> s4 >> f;
    hour = d - a;
    minute = e - b;
    sec = f - c;
    if (minute < 0) {
        minute = e - b + 60;
        hour = hour -1;
    }
    if (sec < 0) {
        sec = f - c + 60;
        minute = minute - 1;
    }
    cout << hour
        << ":" << setw(2) << setfill('0') << minute
        << ":" << setw(2) << setfill('0') << sec
        << endl;
    return 0;
}
