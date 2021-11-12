//
//  main.cpp
//  EX4_Q17 金币
//
//  Created by cyrain on 2021/10/24.
//

#include <iostream>
int main() {
    using namespace std;
    int day = 0;
    cin >> day;
    int n = 0, sum = 0;
    while (1) {
        sum = sum + n;
        if (sum <= day) {
            n++;
        } else {
            break;
        }
    }
    int delta = 0, coin = 0;
    delta = sum - day;
    for (int i = 1; i <= n; i++) {
        coin += (i * i);
    }
    coin -= (delta * n);
    cout << coin << endl;
    return 0;
}
