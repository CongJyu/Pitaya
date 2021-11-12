//
//  main.cpp
//  EX5_Q08 猴导师
//
//  Created by cyrain on 2021/10/31.
//

#include <iostream>
int main() {
    using namespace std;
    int n = 0, k = 0;
    cin >> n >> k;
    int a[101] = {0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int b[101][2];
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> b[i][j];
        }
    }
    for (int t = 0; t < n; t++) {
        int sum = 0, x = 0;
        for (int j = 0; j < n; j++) {
            if (j != t && a[t] > a[j]) {
                sum++;
                for (int i = 0; i < k; i++) {
                    int f = 0;
                    if (b[i][0] == t + 1) {
                        x = b[i][1];
                        f = 1;
                    } else if (b[i][1] == t + 1) {
                        x = b[i][0];
                        f = 1;
                    }
                    if (j == x - 1 && f == 1) {
                        sum--;
                    }
                }
            }
        }
        cout << sum << " ";
    }
    cout << endl;
    return 0;
}
