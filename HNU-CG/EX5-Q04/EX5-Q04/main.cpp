//
//  main.cpp
//  EX5-Q04 排队喝水
//
//  Created by cyrain on 2021/10/28.
//

#include <iostream>
using namespace std;
int main() {
    int T = 0;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int n = 0;
        cin >> n;
        int a[n][2], b[n];
        for (int x = 0; x < n; x++) {
            for (int y = 0; y < 2; y++) {
                cin >> a[x][y];
            }
        }
        int time = a[0][0];
        b[0] = a[0][0];
        for (int i = 1; i < n; i++) {
            if (time < a[i][1]) {
                time = time + 1;
                b[i] = time;
            } else {
                b[i] = 0;
            }
        }
        for (int j = 0; j < n; j++) {
            cout << b[j] << " ";
        }
        cout << endl;
    }
    return 0;
}

