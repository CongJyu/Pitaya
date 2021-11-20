//
//  main.cpp
//  P_593
//
//  Created by cyrain on 2021/11/4.
//

#include <iostream>
#include <iomanip>
using namespace std;
void whichMin(double, double, double);
int main() {
    double a = 0.0, b = 0.0, c = 0.0;
    while (true) {
        cin >> a;
        if (a == -1) {
            break;
        } else {
            cin >> b >> c;
            whichMin(a, b, c);
        }
    }
    return 0;
}
void whichMin(double x, double y, double z) {
    double flag = 0.0;
    if (x - y < 1e-6) {
        flag = x;
        if (flag - z < 1e-6) {
            flag = flag;
        } else {
            flag = z;
        }
        cout << fixed << setprecision(2) << flag << endl;
    } else {
        flag = y;
        if (flag - z < 1e-6) {
            flag = flag;
        } else {
            flag = z;
        }
        cout << fixed << setprecision(2) << flag << endl;
    }
}
