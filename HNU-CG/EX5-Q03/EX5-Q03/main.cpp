//
//  main.cpp
//  EX5-Q03 岁月留痕
//
//  Created by cyrain on 2021/10/28.
//

#include <iostream>
#include <cstring>
int main() {
    using namespace std;
    const string month = {"31 29 31 30 31 30 31 31 30 31 30 31 31 28 31 30 31 30 31 31 30 31 30 31 31 28 31 30 31 30 31 31 30 31 30 31 31 28 31 30 31 30 31 31 30 31 30 31"};
    string input;
    int n = 0;
    cin >> n;
    cin.get();
    getline(cin, input);
    if (month.find(input) != string::npos) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
