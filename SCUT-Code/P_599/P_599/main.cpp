//
//  main.cpp
//  P_599 6.19 Hypotenuse Calculations
//
//  Created by Rain Chen on 2022/1/8.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double a, b;
    while (true) {
        cin >> a;
        if (a == 0) {
            break;
        }
        cin >> b;
        double c = 0.0;
        c = sqrt(a * a + b * b);
        cout << fixed << setprecision(1) << c << endl;
    }
    return 0;
}
