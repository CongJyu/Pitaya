//
//  main.cpp
//  P_603 Tutorial 6.2 Prime Numbers
//
//  Created by Rain Chen on 2022/1/8.
//

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n = 0;
    while (true) {
        cin >> n;
        if (n == -1) {
            break;
        }
        cout << 2 << endl;
        for (int i = 2; i <= n; i++) {
            int mark = 0;
            for (int j = 2; j < sqrt(i) + 1; j++) {
                if (i % j == 0) {
                    mark++;
                    break;
                }
            }
            if (mark == 0) {
                cout << i << endl;
            }
        }
        cout << endl;
    }
    return 0;
}
