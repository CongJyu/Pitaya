//
//  main.cpp
//  HW6-Q08 凯撒密码
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
using namespace std;
char str[100];
void encrypt(int, char str[]);
int main() {
    int n = 0;
    cin >> n;
    cin.get();
    cin.get(str, 100);
    encrypt(n, str);
    return 0;
}
void encrypt(int x, char str[]) {
    for (int i = 0; i < 100; i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + x;
            while (str[i] > 90) {
                str[i] = str[i] - 26;
            }
        } else {
            continue;
        }
    }
    for (int i = 0; i < 100; i++) {
        cout << str[i];
    }
    cout << endl;
}
