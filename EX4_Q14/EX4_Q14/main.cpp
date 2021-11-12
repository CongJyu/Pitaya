//
//  main.cpp
//  EX4_Q14 青蛙跳
//
//  Created by cyrain on 2021/10/24.
//

#include <iostream>
int main() {
    using namespace std;
    long long t, a, b, k;
    cin >> t;
    long long location = 0;
    for (int i = 0; i < t; i++) {
        cin >> a >> b >> k;
        if (k % 2 == 0) {
            location = location + (a - b) * (k / 2);
        } else {
            location = location + (a - b) * (k / 2) + a;
        }
        cout << location << endl;
        location = 0;
    }
    return 0;
}
