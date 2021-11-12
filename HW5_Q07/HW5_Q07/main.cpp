//
//  main.cpp
//  HW5_Q07 消失的数字
//
//  Created by cyrain on 2021/10/26.
//

#include <iostream>
#include <algorithm>
int main() {
    using namespace std;
    int n = 0;
    cin >> n;
    int a[100] = {0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        if (a[i] != i) {
            cout << i << endl;
            return 0;
        } else {
            continue;
        }
    }
    return 0;
}
