//
//  main.cpp
//  HW5_Q10 密码
//
//  Created by cyrain on 2021/10/26.
//

#include <iostream>
int main() {
    using namespace std;
    int n = 0;
    cin >> n;
    char msg[1001] = {'0'};
    for (int i = 0; i < n; i++) {
        cin >> msg[i];
    }
    for (int i = 0; i < n; i++) {
        msg[i] = msg[i] + 4;
        if (msg[i] > 122) {
            msg[i] = msg[i] - 26;
        }
        if (msg[i] > 90 && msg[i] < 97) {
            msg[i] = msg[i] - 26;
        }
        cout << msg[i];
    }
    cout << endl;
    return 0;
}
