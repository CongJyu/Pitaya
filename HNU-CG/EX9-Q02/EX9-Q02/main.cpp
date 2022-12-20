//
//  main.cpp
//  EX9-Q02 选举
//
//  Created by Rain Chen on 2021/12/6.
//

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
    int n = 0, m = 0;
    cin >> n >> m;
    int a[m][n], c[n];
    for (int x = 0; x < m; x++) {
        for (int y = 0; y < n; y++) {
            cin >> a[x][y];
        }
    }
    for (int i = 0; i < n; i++) {
        c[i] = 0;
    }
    for (int x = 0; x < m; x++) {
        int max = a[x][0], ll = 0;
        for (int y = 1; y < n; y++) {
            if (a[x][y] > max) {
                max = a[x][y];
                ll = y;
            }
        }
        c[ll]++;
    }
    int max = c[0], l = 0;
    for (int s = 1; s < n; s++) {
        if (c[s] > max) {
            max = c[s];
            l = s;
        }
    }
    cout << l + 1 << endl;
    return 0;
}
