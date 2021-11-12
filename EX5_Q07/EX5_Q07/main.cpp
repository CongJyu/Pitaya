//
//  main.cpp
//  EX5_Q07 拜访朋友
//
//  Created by cyrain on 2021/10/30.
//

#include <iostream>
int main() {
    using namespace std;
    int n = 0, m = 0;
    cin >> n >> m;
    int a[101][2];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    }
    int t = 0, f = 0;
    for (int i = 0; i < n; i++) {
        if (a[i][0] <= t && a[i][1] >= t) {
            t = a[i][1];
            if (t >= m) break;
        }
        if (i == n - 1) {
            f++;
            i = -1;
        }
        if (f > n) {
            break;
        }
    }
    if (t >= m) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
