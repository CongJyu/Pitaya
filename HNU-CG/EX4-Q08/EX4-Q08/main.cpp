//
//  main.cpp
//  EX4-Q08 电梯
//
//  Created by cyrain on 2021/10/22.
//

#include <iostream>
int main() {
    using namespace std;
    int n = 0, y = 0;
    cin >> n;
    int ch[101] = {0};
    for (int i = 0; i < n; i++) {
        cin >> ch[i];
    }
//    y = y + 6 * ch[0] + 5 * (ch[0] - 1);
    y = y + 6 * ch[0] + 5;
    for (int a = 1; a < n; a++) {
        if (ch[a] >= ch[a - 1]) {
            y = y + 6 * (ch[a] - ch[a - 1]) + 5;
        } else {
            y = y + 4 * (ch[a - 1] - ch[a]) + 5;
        }
    }
    cout << y << endl;
    return 0;
}
