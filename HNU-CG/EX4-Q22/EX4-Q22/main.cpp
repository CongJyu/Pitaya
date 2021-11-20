//
//  main.cpp
//  EX4-Q22 汉明距离
//
//  Created by cyrain on 2021/10/25.
//

#include <iostream>
#include <iomanip>
int main() {
    using namespace std;
    int x = 0, y = 0;
    cin >> x >> y;
    int binx[32] = {0};
    int biny[32] = {0};
    int counter = 0;
    for (int i = 0; i < 32; i++) {
        if (x % 2 == 0) {
            binx[i] = 0;
            x /= 2;
        } else {
            binx[i] = 1;
            x /= 2;
        }
    }
    for (int j = 0; j < 32; j++) {
        if (y % 2 == 0) {
            biny[j] = {0};
            y /= 2;
        } else {
            biny[j] = 1;
            y /= 2;
        }
    }
    for (int k = 0; k < 32; k++) {
        if (binx[k] == biny[k]) {
            continue;
        } else {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}

