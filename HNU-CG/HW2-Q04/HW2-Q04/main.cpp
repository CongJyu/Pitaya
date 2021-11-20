//
//  main.cpp
//  HW2-Q04 算术运算
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
#include <iomanip>
int main() {
    using namespace std;
    int num1 = 0, num2 = 0;
    cin >> num1 >> num2;
    cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
    cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
    cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
    cout << num1 << "/" << num2 << "=" << fixed << setprecision(2)
    << (num1 / 1.0) / (num2 / 1.0) << endl;
    cout << num1 << "%" << num2 << "=" << num1 % num2 << endl;
    return 0;
}
