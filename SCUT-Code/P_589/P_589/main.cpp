//
//  main.cpp
//  P_589
//
//  Created by cyrain on 2021/11/4.
//

#include <iostream>
using namespace std;
int main() {
    int n = 0;
    int a = 1, b = 1;
    int t = 0;
    while (true) {
        cin >> n;
        if (n != -1) {
            if (n == 1) {
                cout << 0 << endl;
            } else if (n == 2) {
                cout << 0 << "," << 1 << endl;
            } else if (n == 3) {
                cout << 0 << "," << 1 << "," << 1 << endl;
            } else {
                cout << 0 << "," << 1 << "," << 1;
                for (int i = 0; i < (n - 3); i++) {
                    cout << "," << a + b;
                    t = b;
                    b = a + b;
                    a = t;
                }
                a = 1;
                b = 1;
                cout << endl;
            }
        } else {
            break;
        }
    }
}
