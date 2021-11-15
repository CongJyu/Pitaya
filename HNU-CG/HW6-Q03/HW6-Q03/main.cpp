//
//  main.cpp
//  HW6-Q03 公约数与公倍数
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
using namespace std;
int gcd(int, int);    //  最大公约数
int lcm(int, int);    //  最小公倍数
int main() {
    int a = 0, b = 0;
    cin >> a >> b;
    cout << gcd(a, b) << " " << lcm(a, b) << endl;
    return 0;
}
int lcm(int x, int y) {
    int i = 0;
    i = max(x, y);
    while (true) {
        if (i % x == 0 && i % y == 0) {
            break;
        }
        i++;
    }
    return i;
}
int gcd(int x, int y) {    //  辗转相除法
    int n = max(x, y);
    int m = min(x, y);
    if (n % m == 0) {
        return m;
    }
    return gcd(n % m, m);
}
