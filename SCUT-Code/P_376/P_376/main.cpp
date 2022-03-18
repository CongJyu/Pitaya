//
//  main.cpp
//  P_376 字母转换
//
//  Created by Rain Chen on 2022/3/10.
//

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    for (int i = 0; i < input.length(); ++i) {
        if (input[i] >= 97 && input[i] <= 122) {
            input[i] -= 32;
        }
    }
    cout << input << endl;
    return 0;
}
