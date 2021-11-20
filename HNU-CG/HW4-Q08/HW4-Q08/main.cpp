//
//  main.cpp
//  HW4-Q08 输出小于等于n的所有素数
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
int main() {
    using namespace std;
    int n = 0, counter = 0;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        int flag = 0;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            cout << i << " ";
            counter++;
            if (counter == 10) {
                cout << endl;
                counter = 0;
            }
        }
    }
    if (counter == 0)
        cout << "null" << endl;
    return 0;
}
