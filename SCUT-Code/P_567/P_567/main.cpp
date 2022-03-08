//
//  main.cpp
//  P_567 请问这还是纸牌游戏吗
//
//  Created by Rain Chen on 2022/2/13.
//  something wrong

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long p, n, m;
    cin >> p >> n >> m;
    long long * a = new long long [n];
    long long * b = new long long [m];
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (long long i = 0; i < m; i++) {
        cin >> b[i];
    }
    long long x = p, y = 0;
    long long product = 0;
    for (long long i = 0; i < n; i++) {
        a[i] = a[i] % p;
    }
    for (long long i = 0; i < m; i++) {
        b[i] = b[i] % p;
    }
    for (long long i = 0; i < n; i++) {
        for (long long j = 0; j < m; j++) {
            product = (a[i] * b[j]) % p;
            if (product < x) {
                x = product;
            }
            if (product > y) {
                y = product;
            }
        }
    }
    delete [] a;
    delete [] b;
    cout << x << " " << y << endl;
    return 0;
}
