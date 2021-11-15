//
//  main.cpp
//  EX2-Q08 小猴与香蕉
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
#include <cmath>
int k, n, w, borrow, total = 0, add = 1;
int main() {
    using namespace std;
    cin >> k >> n >> w;
    for (int i = 0; i < w; ++i) {
        total = total + k * add;
        add++;
    }
    borrow = n - total;
    if (borrow >= 0) {
        borrow = 0;
        cout << borrow;
    } else {
        cout << abs(borrow);
    }
    return 0;
}
