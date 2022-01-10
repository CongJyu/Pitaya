//
//  main.cpp
//  P_598 6.18 Exponentiation
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
        long long result = 1;
        for (long long i = 0; i < m; i++) {
            result *= n;
        }
        cout << result << endl;
    }
    return 0;
}
