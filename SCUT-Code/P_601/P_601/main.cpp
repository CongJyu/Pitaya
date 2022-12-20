//
//  main.cpp
//  P_601 6.21 Even Numbers
//
//  Created by Rain Chen on 2022/1/8.
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
            cout << n << " is an even integer" << endl;
        } else {
            cout << n << " is an odd integer" << endl;
        }
    }
    return 0;
}
