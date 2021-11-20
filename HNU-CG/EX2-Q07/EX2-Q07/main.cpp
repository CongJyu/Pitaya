//
//  main.cpp
//  EX2-Q07 苹果和虫子
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
#include <cmath>
int main() {
    using namespace std;
    int n, x, y, left;
    cin >> n >> x >> y;
    if (y == 0) {
        cout << n << endl;
        return 0;
    } else {
        left = n - y / x - 1;
        if (left < 0)
            left = 0;
        cout << left << endl;
    }
    return 0;
}
