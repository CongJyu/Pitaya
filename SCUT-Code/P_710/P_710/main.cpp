//
//  main.cpp
//  P_710 奇怪的乘法
//
//  Created by Rain Chen on 2022/2/14.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t = 0;
    cin >> t;
    while (t--) {
        long long a = 0, b = 0;
        cin >> a >> b;
        long long prod = 0;
        prod = (((a + 100) % 100007) * ((b - 20) % 100007)) % 100007;
        cout << prod << endl;
    }
    return 0;
}
