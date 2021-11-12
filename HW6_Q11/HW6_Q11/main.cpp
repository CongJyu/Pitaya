//
//  main.cpp
//  HW6_Q11 求奇数和
//
//  Created by cyrain on 2021/11/6.
//

#include <iostream>
using namespace std;
bool even(int);
int main() {
    int n = 0;
    int sum = 0;
    while (true) {
        cin >> n;
        if (n <= 0) {
            break;
        }
        if (even(n) == 1) {
            continue;
        } else {
            sum = sum + n;
        }
    }
    cout << sum << endl;
    return 0;
}
bool even(int x) {
    if (x % 2 == 0) {
        return true;
    } else {
        return false;
    }
}
