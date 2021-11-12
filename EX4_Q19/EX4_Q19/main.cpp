//
//  main.cpp
//  EX4_Q19 松雅喜欢玩纸牌
//
//  Created by cyrain on 2021/10/24.
//

#include <iostream>
int main() {
    using namespace std;
    char desktop[2];
    char player[10];
    for (int i = 0; i < 2; i++) {
        cin >> desktop[i];
    }
    for (int j = 0; j < 10; j++) {
        cin >> player[j];
    }
    int counter = 0;
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 10; y++) {
            if (desktop[x] == player[y]) {
                counter++;
            } else {
                counter = counter;
            }
        }
    }
    if (counter > 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
