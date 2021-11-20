//
//  main.cpp
//  EX2-Q10 铺地砖
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
int main() {
    using namespace std;
    int m, n, brick;
    cin >> m >> n;
    if (m % 2 == 0) {
        brick = (m / 2) * n;
    } else if (m % 2 != 0 && n % 2 == 0) {
        brick = (m / 2) * n + n / 2;
    } else {
        brick = (m / 2) * n + n / 2 + 1;
    }
    cout << brick << endl;
    return 0;
}
