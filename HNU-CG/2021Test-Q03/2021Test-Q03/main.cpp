//
//  main.cpp
//  2021Test-Q03 下载文件
//
//  Created by Rain Chen on 2022/1/3.
//

#include <iostream>
int main() {
    using namespace std;
    int t;
    cin >> t;
    int n, k;
    int x, i, j, l;
    int y, sum;
    int D[500], T[500];
    for (i = 0; i < t; i++) {
        sum = 0;
        y = 0;
        cin >> n >> k;
        x = k;
        for (j = 0; j < n; j++) {
            cin >> T[j] >> D[j];
            x = x - T[j];
            if (x <= 0) {
                y = x * (-1);
                sum = sum + y * D[j];
                break;
            }
        }
        for (l = j + 1; l < n; l++) {
            cin >> T[l] >> D[l];
            sum = sum + T[l] * D[l];
        }
        cout << sum << endl;
    }
    return 0;
}

