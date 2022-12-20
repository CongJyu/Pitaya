//
//  main.cpp
//  P_502 基础函数
//
//  Created by Rain Chen on 2022/3/17.
//

#include <iostream>

using namespace std;

int fn(int x) {
    int out = 0;
    out = 3 * x - 6 * x * (x + 3) + 29 * (x + 2) * (x - 1);
    return out;
}

int main() {
    int a = 0, b = 0, c = 0, d = 0;
    while (cin >> a >> b >> c >> d) {
        cout << fn(a) + fn(b) + fn(c) + fn(d) << endl;
    }
    return 0;
}
