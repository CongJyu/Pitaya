//
//  main.cpp
//  HW6-Q10 实现给定公式，并输出结果
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
void k(double, double);
int main() {
    double s = 0.0, r = 0.0;
    cin >> r >> s;
    k(r, s);
    return 0;
}
void k(double x, double y) {
    double kout = 0;
    if (x * x - y * y < 0) {
        kout = sqrt(sin(x) * sin(x) + sin(y) * sin(y));
    } else {
        kout = sin(x * y) / 2.0;
    }
    cout << fixed << setprecision(5) << kout << endl;
}
