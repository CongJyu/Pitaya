//
//  main.cpp
//  P_554 4.28 Checkerboard Pattern of Asterisks
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
        if (n % 2 == 0) {
            for (int j = 0; j < n / 2; j++) {
                for (int i = 0; i < n; i++) {
                    cout << "* ";
                }
                cout << endl;
                for (int i = 0; i < n; i++) {
                    cout << " *";
                }
                cout << endl;
            }
        } else {
            for (int j = 0; j < (n - 1) / 2; j++) {
                for (int i = 0; i < n; i++) {
                    cout << " *";
                }
                cout << endl;
                for (int i = 0; i < n; i++) {
                    cout << "* ";
                }
                cout << endl;
            }
            for (int i = 0; i < n; i++) {
                cout << " *";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
