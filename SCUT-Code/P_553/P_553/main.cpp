//
//  main.cpp
//  P_553 4.26 Palindromes
//
//  Created by Rain Chen on 2022/1/9.
//

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main() {
    int num;
    while (true) {
        cin >> num;
        if (num == -1) {
            break;
        }
        int a, b, c, d, e;
        a = num / 10000;
        b = (num % 10000) / 1000;
        c = (num % 1000) / 100;
        d = (num % 100) / 10;
        e = num % 10;
//        cout << a << b << c << d << e << endl;
        if (a == e && b == d) {
            cout << num << " is a palindrome!!!" << endl;
        } else {
            cout << num << " is not a palindrome." << endl;
        }
    }
    return 0;
}
