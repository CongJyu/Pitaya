//
//  main.cpp
//  P_623 Tutorial 7.2 Combination
//
//  Created by Rain Chen on 2022/1/25.
//

#include <iostream>
using namespace std;

int main() {
    int n = 0, k = 0;
    while (true) {
        cin >> n;
        if (n == -1) {
            break;
        }
        cin >> k;
        int fz = 1;
        int fm = 1;
        for (int i = 0; i < k; i++) {
            fz *= n;
            n--;
        }
        while (k > 1) {
            fm *= k;
            k--;
        }
        cout << fz / fm << endl;
    }
    return 0;
}
