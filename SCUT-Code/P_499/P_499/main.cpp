//
//  main.cpp
//  P_499 输入输出之浮点误差与精度控制
//
//  Created by Rain Chen on 2022/3/17.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a = 0, b = 0;
    while (cin >> a >> b) {
        cout << fixed << setprecision(6);
        cout << a * b << endl;
    }
    return 0;
}
