//
//  main.cpp
//  EX4-Q11 莫比乌斯函数
//
//  Created by cyrain on 2021/10/23.
//  Some things went wrong

#include <iostream>
using namespace std;
//typedef long long ll;

int mod(int, int);
int mu(int);

int main() {
    int n;
    cin >> n;
    cout << mu(n) << endl;
    return 0;
}
int mod(int a, int b) {
    return a - a / b * b;
}
int mu(int n) {
    int cnt, k = 0;
    for (int i = 2; i * i < n; i++) {
        if (mod(n, i)) {
            continue;
        }
        cnt = 0;
        k++;
        while (mod(n, 1) == 0) {
            n /= i;
            cnt++;
        }
        if (cnt >= 2) {
            return 0;
        }
    }
    if (n != 1) {
        k++;
    }
    return mod(k, 2) ? -1 : 1;
}

