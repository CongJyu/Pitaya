//
//  main.cpp
//  HW6-Q02 猜数字
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
using namespace std;
const int crt = 35;
int x = 0;
int guess();
int main() {
    guess();
    return 0;
}
int guess() {
    for (int i = 0; i < 5; i++) {
        cin >> x;
        if (x < crt) {
            cout << "Wrong! Too low!" << endl;
        } else if (x > crt) {
            cout << "Wrong! Too high!" << endl;
        } else {
            cout << "Right!" << endl;
            return 0;
        }
    }
    return 0;
}
