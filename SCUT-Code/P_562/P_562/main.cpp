//
//  main.cpp
//  P_562
//
//  Created by cyrain on 2021/11/3.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n = 0;
    double pi = 0.0;
    int sign = -1;
    while (n != -1) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                sign = sign * (-1);
                pi = pi + (4.0 / (2 * j + 1)) * sign;
            }
            cout << fixed << setprecision(8) << pi << endl;
            sign = -1;
            pi = 0.0;
        }
        cout << endl;
    }
    return 0;
}
