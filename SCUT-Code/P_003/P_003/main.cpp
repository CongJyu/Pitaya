//
//  main.cpp
//  P_003 字符拼接
//
//  Created by Rain Chen on 2022/1/9.
//

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main() {
    int n = 0;
    while (cin >> n) {
        char * out = new char [n];
        for (int i = 0; i < n; i++) {
            cin >> out[i];
        }
        for (int i = 0; i < n; i++) {
            cout << out[i];
        }
        cout << endl;
        delete [] out;
    }
    return 0;
}
