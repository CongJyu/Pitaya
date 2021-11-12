//
//  main.cpp
//  EX5_Q13 小希与火车
//
//  Created by cyrain on 2021/10/31.
//

#include <iostream>
int main() {
    using namespace std;
    int T = 0;
    cin >> T;
    int a[T][4];
    for (int x = 0; x < T; x++) {
        for (int y = 0; y < 4; y++) {
            cin >> a[x][y];
        }
    }
    int b[T];
    for (int i = 0; i < T; i++) {
        if (a[i][2] == a[i][3]) {
            if (a[i][2] % a[i][1] == 0) {
                b[i] = a[i][0] / a[i][1] - 1;
            } else {
                b[i] = a[i][0] / a[i][1];
            }
        } else if (a[i][0] >= a[i][2]) {
            if (a[i][0] <= a[i][3]) {
                b[i] = (a[i][2] - 1) / a[i][1];
            } else {
                b[i] = a[i][0] / a[i][1] + (a[i][2] - 1) / a[i][1] - a[i][3] / a[i][1];
            }
        } else if (a[i][0] < a[i][2]) {
            b[i] = a[i][0] / a[i][1];
        }
    }
    for (int i = 0; i < T; i++) {
        cout << b[i] << endl;
    }
    return 0;
}
