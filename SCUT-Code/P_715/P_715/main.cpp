//
//  main.cpp
//  P_715 永远十七岁的少女
//
//  Created by Rain Chen on 2021/12/28.
//

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main() {
    string input;
    getline(cin, input);
    long long l = input.length();
    if (l <= 15) {
        cout << "Alive" << endl;
        return 0;
    }
    for (long long i = l - 16; i < l; i++) {
        if (input[i] == ' ') {
            cout << "Alive" << endl;
            return 0;
        }
    }
    cout << "Poor guy" << endl;
    return 0;
}
