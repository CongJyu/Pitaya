//
//  main.cpp
//  EX6-Q02-02 片段编程题 最大公约数和最小公倍数
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
using namespace std;
int gcd(int, int);
int lcm(int, int);
int main() {
    int x, y;
    cin >> x >> y;
    cout << gcd(x, y) << " " << lcm(x, y) << endl;
    return 0;
}
int gcd(int u, int v) {
    int i, max;
    if (u > v) {
        max = u;
    } else {
        max = v;
    }
    if (u <= 1 || v <= 1) {
        return 1;
    }
    for (i = max - 1; i > 1; i--) {
        if (u % i == 0 && v % i == 0) {
            break;
        }
    }
    return i;
}
int lcm(int u, int v) {
    return u * v / gcd(u, v);
}
