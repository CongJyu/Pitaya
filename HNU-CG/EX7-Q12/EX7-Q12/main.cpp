//
//  main.cpp
//  EX7-Q12 小数化分数
//
//  Created by Rain Chen on 2021/11/28.
//

#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;
int gcd(int a, int b) {
    int c;
    c = a % b;
    while (c) {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}
int main() {
    int N = 0;
    cin >> N;
    while (N--) {
        char a[15];
        cin >> a;
        int flag1 = 0;
        int p = 0, q = 0;
        int x = 0, y = 0, z = 0;
        for (int i = 2; a[i]; i++) {
            if (a[i] != '(' && flag1 == 0) {
                x *= 10;
                x += a[i] - '0';
                p++;
            }
            if (a[i] == '(' && flag1 == 0) {
                flag1 = 1;
                i++;
            }
            if (a[i] != ')' && flag1 == 1) {
                z *= 10;
                z += a[i] - '0';
                q++;
            }
        }
        if (flag1 && p) {
            int n = q;
            int m = p;
            int temp = x;
            while (n--) {
                y *= 10;
                y += 9;
                x *= 10;
            }
            while (m--) {
                y *= 10;
            }
            x = x + z - temp;
        }
        if (flag1 && !p) {
            int n = q - 1;
            y = 9;
            x = z;
            while (n--) {
                y *= 10;
                y += 9;
            }
        }
        if (!flag1) {
            int n = p;
            y = 1;
            while (n--) {
                y *= 10;
            }
        }
        int c = gcd(x, y);
        x /= c;
        y /= c;
        cout << x << "/" << y << endl;
    }
    return 0;
}
