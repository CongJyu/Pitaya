//
//  main.cpp
//  HW6-Q05 n位数
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
using namespace std;
int fun(int);
int main() {
    int n = 0;
    cin >> n;
    cout << fun(n) << endl;
    return 0;
}
int fun(int x) {
    int m = x, cnt = 0;
    if (x < 10) {
        return 0;
    }
    while (1) {
        m = m / 10;
        cnt++;
        if (m < 10) {
            break;
        }
    }
    int dev = 1;
    for (int i = 0; i < cnt; i++) {
        dev *= 10;
    }
    x = x % dev;
    return x;
}
