//
//  main.cpp
//  EX4-Q12 大象看朋友
//
//  Created by cyrain on 2021/10/24.
//

#include <iostream>
#include <cmath>
int main() {
    using namespace std;
    int x, m, step = 0;
    cin >> x >> m;
    x = abs(x);
    if (x <= (2 * m - 1)) {
        if (x % 2 == 0) {
            step = 2;
        } else {
            step = 1;
        }
    } else {
        if (x % 2 == 0) {
            step = x / (2 * m - 1);
            x = x % (2 * m - 1);
            if (x == 0) {
                step = step;
            } else {
                step++;
            }
        } else {
            step = x / (2 * m - 1) + 1;
            x = x % (2 * m - 1);
            if (x == 0) {
                step = step;
            } else {
                step++;
            }
        }
//        step = x / (2 * m - 1);
//        x = x % (2 * m - 1);
//        if (x == 0) {
//            step = step;
//        } else {
//            step++;
//        }
    }
    cout << step << endl;
    return 0;
}

