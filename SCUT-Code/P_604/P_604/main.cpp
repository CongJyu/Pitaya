//
//  main.cpp
//  P_604 Tutorial 6.3 Greatest Common Divisor
//
//  Created by Rain Chen on 2022/1/8.
//

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n = 0, m = 0;
    while (true) {
        cin >> n;
        if (n == -1) {
            break;
        }
        cin >> m;
        int tmp = 0;
        for (int i = 1; i <= min(n, m); i++) {
            if ((m % i == 0) && (n % i == 0)) {
                if (i >= tmp) {
                    tmp = i;
                }
            }
        }
        cout << tmp << endl;
    }
    return 0;
}
