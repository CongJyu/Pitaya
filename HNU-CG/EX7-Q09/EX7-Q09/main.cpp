//
//  main.cpp
//  EX7-Q09 机器人游戏
//
//  Created by Rain Chen on 2021/11/28.
//

#include <iostream>
#include <string>
using namespace std;
int main() {
    int t = 0;
    cin >> t;
    for (int j = 0; j < t; j++) {
        string s;
        int l = 0;
        cin >> s;
        l = (int)s.size();
        int k = 0;
        int * a = new int [l + 1];
        int * b = new int [l + 1];
        for (int i = 0; i < l; i++) {
            if (s[i] != '.') {
                a[k + 1] = s[i] - '0';
                b[k + 1] = i + 1;
                k++;
                if (k > 1) {
                    if (a[k] + a[k - 1] >= b[k] - b[k - 1]) {
                        cout << "unsafe" << endl;
                        break;
                    }
                }
            }
            if (i == l - 1) {
                cout << "safe" << endl;
                break;
            }
        }
        delete[] a;
        delete[] b;
    }
    return 0;
}
