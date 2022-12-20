//
//  main.cpp
//  EX7-Q07 音乐DJ和回响贝斯
//
//  Created by Rain Chen on 2021/11/23.
//

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
    string encrypt;
    cin >> encrypt;
    int size = (int)encrypt.length();
    char * ss = new char [size];
    strcpy(ss, encrypt.c_str());
    for (int i = 1; i < size; i++) {
        if (encrypt[i - 1] == 'W' && encrypt[i] == 'U' && encrypt[i + 1] == 'B') {
            encrypt[i] = '\0';
            encrypt[i - 1] = '\0';
            encrypt[i + 1] = '\0';
        }
    }
    for (int i = 0; i < size; i++) {
        if (encrypt[i] != '\0' && encrypt[i + 1] != 0) {
            cout << encrypt[i];
        } else if (encrypt[i] != '\0' && encrypt[i + 1] == 0) {
            cout << encrypt[i] << " ";
        } else {
            continue;
        }
    }
    cout << endl;
    delete[] ss;
    return 0;
}
