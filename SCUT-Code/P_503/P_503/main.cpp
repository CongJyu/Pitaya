//
//  main.cpp
//  P_503 基础函数Plus
//
//  Created by Rain Chen on 2022/3/17.
//

#include <iostream>

using namespace std;

int f(int x) {
    int f = 0;
    f = x * 3 + ((x - 1) * 6 + 4) + 3;
    return f;
}

int g(int x) {
    int g = 0;
    g = f(x) * 2 - f(x) * f(x - 1);
    return g;
}

int k(int x) {
    int k = 0;
    k = g(x) * (g(2) - f(4));
    return k;
}

int main() {
    int a = 0, b = 0;
    while (cin >> a >> b) {
        cout << k(a) - k(b) << endl;
    }
    return 0;
}
