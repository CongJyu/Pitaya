//
//  main.cpp
//  EX6-Q01-01 接口编程题 魔数
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
#include "magic.h"
using namespace std;
int f1(int);
int f14(int);
int f144(int);
int ff(int);
int main() {
    int n, a, b, c, d;
    cin >> n;
    a = f1(n);
    b = f14(n);
    c = f144(n);
    d = ff(n);
    if ((a + b + c) == d) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
int f1(int v) {
    int m = 0;
    while (v != 0) {
        if (v % 10 == 1) {
            m++;
        }
        v /= 10;
    }
    return m;
}
int f14(int x) {
    int k = 0;
    while (x != 0) {
        if (x % 100 == 14) {
            k++;
        }
        x /= 10;
    }
    return k;
}
int f144(int y) {
    int j = 0;
    while (y != 0) {
        if (y % 1000 == 144) {
            j++;
        }
        y /= 10;
    }
    return j;
}
int ff(int z) {
    int i = 0;
    while (z != 0) {
        z /= 10;
        i++;
    }
    return i;
}
