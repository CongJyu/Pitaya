//
//  main.cpp
//  EX4_Q18 求sin(x)的近似值
//
//  Created by cyrain on 2021/10/24.
//

//#include <iostream>
//#include <iomanip>
//int main() {
//    using namespace std;
//    int x = 0;
//    cin >> x;
//    double sine = 0.0, delta = 0.0;
//    double up = 1.0, down = 1.0;
//    int counter = 0;
//    for (int i = 1; ; i += 2) {
//        up = up * (x * x);
//        down = down * i * (i - 1);
//        counter++;
//        delta = up / down;
//        if (counter % 2 == 0) {
//            sine = sine + delta;
//        } else {
//            sine = sine - delta;
//        }
//        if (delta < 5e-8) {
//            break;
//        } else {
//            continue;
//        }
//    }
//    cout << fixed << setprecision(6) << sine << endl;
//    return 0;
//}
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    long double x = 0, sum = 0, num = 0;
    cin >> x;
    for (; ;) {
        if (x <= 2 * 3.1415926535 && x) {
            break;
        } else {
            if (x > 2 * 3.1415926535) {
                x = x - 2 * 3.1415926535;
            } else {
                if (x < 0) {
                    x = x + 2 * 3.1415926535;
                }
            }
        }
    }
    num = x;
    sum = x;
    int i = 0;
    for (i = 1; 1; i++) {
        num = num * x * x / ((2 * i) * (2 * i + 1));
        if (i % 2 != 0) {
            sum = sum - num;
        } else {
            sum = sum + num;
        }
        if (num < 0.00000005) {
            break;
        }
    }
    cout << fixed << setprecision(6) << sum << endl;
    return 0;
}
