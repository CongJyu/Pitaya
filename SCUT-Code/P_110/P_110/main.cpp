//
//  main.cpp
//  P_110 作业之语文篇
//
//  Created by Rain Chen on 2022/2/14.
//

#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int x, int y) {
    return (x > y);
}

int main() {
    int n = 0;
    while (cin >> n) {
        int * a = new int [n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n, cmp);
        int flag = 0;
        for (int i = 0; i < n - 1; i++) {
            if (a[i + 1] == a[i]) {
                continue;
            } else {
                cout << a[i + 1] << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            cout << "all the same" << endl;
        }
    }
    return 0;
}
