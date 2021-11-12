//
//  main.cpp
//  EX4_Q05 阿迪玩游戏
//
//  Created by cyrain on 2021/10/21.
//

#include <iostream>
int main() {
    using namespace std;
    int n, m;
    cin >> n >> m;
    int move;
    int block = 1, count = 0;
    for (int i = 0; i < m; i++) {
        cin >> move;
        for (int j = 0; j < move; j++) {
            if (block == n) {
                count = 1;
            } else if (block == 1) {
                count = 0;
            }
            if (count == 1) {
                block--;
            } else {
                block++;
            }
        }
    }
    cout << block << endl;
    return 0;
}
