//
//  main.cpp
//  EX7-Q04 炸弹
//
//  Created by Rain Chen on 2021/11/21.
//  Something wrong

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int w = 0; w < t; w++) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m], a1 = 0, b1 = 0, sum = 0;
        memset(a, 0, n * sizeof(int));
        memset(b, 0, m * sizeof(int));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                char ch;
                cin >> ch;
                if (ch == '*') {
                    sum++;
                    a[i]++;
                    b[j]++;
                    if (a[i] > a1) {
                        a1 = a[i];
                    }
                    if (b[j] > b1) {
                        b1 = b[j];
                    }
                }
            }
        }
        if (sum == a1 + b1 - 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
