//
//  main.cpp
//  P_600 6.20 Multiples
//
//  Created by Rain Chen on 2022/1/8.
//

#include <iostream>
using namespace std;
int main() {
    long long n = 0, m = 0;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        cin >> m;
        if (m % n == 0) {
            cout << m << " is a multiple of " << n << endl;
        } else {
            cout << m << " is not a multiple of " << n << endl;
        }
    }
    return 0;
}
