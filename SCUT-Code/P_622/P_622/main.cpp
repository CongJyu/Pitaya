//
//  main.cpp
//  P_622 Tutorial 7.1 Reduced Digit Sum
//
//  Created by Rain Chen on 2022/1/25.
//

#include <iostream>
using namespace std;

int getdigi(int n) {
    if (n < 10) {
        return n;
    }
    int sum = 0;
    while (n > 0) {
        sum += (n % 10);
        n /= 10;
    }
    n = sum;
    if (n < 10) {
        return n;
    } else {
        return getdigi(n);
    }
}

int main() {
    while (true) {
        int n = 0;
        cin >> n;
        if (n == -1) {
            break;
        }
        cout << getdigi(n) << endl;
    }
    return 0;
}
