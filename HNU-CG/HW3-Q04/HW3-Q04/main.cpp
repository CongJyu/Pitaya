//
//  main.cpp
//  HW3-Q04 打印一个金字塔
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
#include <cstdio>
int main() {
    using namespace std;
    int n;
    cin >> n;
    if (n < 1) {
        cout << " *";
        return 0;
    } else {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j < n - (i - 1); j++) {
                cout << " ";
            }
            for (int s = 1; s <= i;s++) {
                cout << " *";
            }
            cout << endl;
        }
    }
    return 0;
}
