//
//  main.cpp
//  P_566 5.23 Diamond of Asterisk
//
//  Created by Rain Chen on 2022/1/9.
//

#include <iostream>
using namespace std;
int main() {
    int n = 0;
    while (true) {
        cin >> n;
        if (n == -1) {
            break;
        }
        if (n == 1) {
            cout << "*" << endl;
        } else {
            for (int i = 0; i < n; i++) {
                for (int j = i; j < n - 1; j++) {
                    cout << " ";
                }
                for (int j = 0; j <= 2 * i; j++) {
                    cout << "*";
                }
                cout << endl;
            }
            for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j <= i; j++) {
                    cout << " ";
                }
                for (int j = i; j < 2 * n - i - 3; j++) {
                    cout << "*";
                }
                cout << endl;
            }
        }
        cout << endl;
    }
    return 0;
}
