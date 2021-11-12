//
//  main.cpp
//  HW6_Q12 计算素数个数并求和
//
//  Created by cyrain on 2021/11/6.
//

#include <iostream>
#include <cmath>
using namespace std;
bool prime(int);
int main() {
    int m = 0, n = 0;
    int sum = 0, cnt = 0;
    cin >> m >> n;
    for (int i = m; i <= n; i++) {
        if (prime(i) == 1) {
            cnt++;
            sum += i;
        } else {
            continue;
        }
    }
    if (m <= 1) {
        cnt--;
        sum--;
    }
    cout << cnt << endl << sum << endl;
    return 0;
}
bool prime(int x) {
    int cnt = 0;
    if (x == 2) {
        return 1;
    }
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            cnt++;
        } else {
            continue;
        }
    }
    if (cnt == 0) {
        return 1;
    } else {
        return 0;
    }
}
