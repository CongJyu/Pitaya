//
//  main.cpp
//  HW4-Q02 打印空心菱形图案
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
int main() {
    using namespace std;
    int n = 0;
    cin >> n;
    for (int i = 0; i < (n + 1); i++) {
        for (int j = 0; j < (n - i); j++) {
            cout << " ";
        }
        for (int k = 0; k < (2 * i + 1); k++) {
            if (i == 0) {
                cout << "*";
            } else if (k == 0 || k == (2 * i)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (i + 1); j++) {
            cout << " ";
        }
        for (int k = 0; k < (2 * (n - i) - 1); k++) {
            if (i == (n - 1)) {
                cout << "*";
            } else if (k == 0 || k == (2 * (n - 1 - i))) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
