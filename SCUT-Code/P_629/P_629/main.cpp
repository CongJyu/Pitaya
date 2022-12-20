//
//  main.cpp
//  P_629 Tutorial 8.3 Palindromes
//
//  Created by Rain Chen on 2022/1/25.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        string rs = s;
        reverse(rs.begin(), rs.end());
        if (s == rs) {
            cout << "\"" << s << "\" is a palindrome" << endl;
        } else {
            cout << "\"" << s << "\" is not a palindrome" << endl;
        }
    }
    return 0;
}
