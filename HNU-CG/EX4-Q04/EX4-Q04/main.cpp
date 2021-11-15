//
//  main.cpp
//  EX4-Q04 数字游戏
//
//  Created by cyrain on 2021/10/21.
//

#include <iostream>
using namespace std;
void out(int);
int main() {
    int n;
    cin >> n;
    cout << n << " ";
    if (n >= 10)
        out(n);
    return 0;
}
void out(int x) {
    int a, b, c = x;
    do {
        a = 1;
        do {
            b = c % 10;
            if (b != 0) {
                a = a * b;
            }
            c = c / 10;
        } while (c > 0);
        c = a;
        cout << a << " ";
    } while (c >= 10);
}
