//
//  main.cpp
//  EX7-Q02 E-mail地址
//
//  Created by Rain Chen on 2021/11/20.
//

#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < (int)s.length(); i++) {
        if (s[i] == '@') {
            for (int j = i + 1; j < (int)s.length(); j++) {
                if (s[j] == '.' && j == i + 1) break;
                if (s[j] == '.') {
                    int x = i, xd = j, cl = 0, cr = 0;
                    for (int i = x - 1; i >= 0; i--) {
                        if (s[i] >= 'a' && s[i] <= 'z') {
                            cl++;
                        }
                        if (s[i] == '.' || s[i] == '@') {
                            break;
                        }
                    }
                    for (int i = xd + 1; i < (int)s.length(); i++) {
                        if (s[i] >= 'a' && s[i] <= 'z') {
                            cr++;
                        } else {
                            break;
                        }
                    }
                    sum += cl * cr;
                    break;
                }
            }
        }
    }
    cout << sum << endl;
    return 0;
}
