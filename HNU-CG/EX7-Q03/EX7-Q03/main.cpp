//
//  main.cpp
//  EX7-Q03 加密与解密
//
//  Created by Rain Chen on 2021/11/21.
//

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    long long leng = (long long)s.length();
    char * ss1 = new char [leng];
    char * ss2 = new char [leng];
    strcpy(ss1, s.c_str());
    strcpy(ss2, s.c_str());
    for (int i = 2; i <= leng; i++) {
        if (leng % i == 0) {
            for (int j = 0; j < i; j++) {
                ss2[j] = ss1[i - j - 1];
            }
            for (int k = 0; k < leng; k++) {
                ss1[k] = ss2[k];
            }
        }
    }
    delete[] ss2;
    for (int i = 0; i < leng; i++) {
        cout << ss1[i];
    }
    delete[] ss1;
    cout << endl;
    return 0;
}
