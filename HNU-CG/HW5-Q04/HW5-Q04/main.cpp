//
//  main.cpp
//  HW5-Q04 统计天数（交换技巧）
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
int main() {
    using namespace std;
    const int size = 1e6+10;
    int a[size];
    int n, max = 1, ctr = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] <= a[i - 1]) {
            if (ctr > max) {
                max = ctr;
            }
            ctr = 1;
        } else {
            ctr++;
        }
    }
    cout << max << endl;
    return 0;
}
