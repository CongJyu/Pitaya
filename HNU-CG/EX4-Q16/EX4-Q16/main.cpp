//
//  main.cpp
//  EX4-Q16 找12
//
//  Created by cyrain on 2021/10/24.
//

#include <iostream>
#include <cstring>
int main() {
    using namespace std;
    int n = 0;
    cin >> n;
    int chk = 1;
    string chks;
    for (int i = 0; i < n; i++) {
        if (chk % 12 == 0) {
            cout << chk << " ";
        } else {
            chks = to_string(chk);
            if (chks.find("12") != string::npos) {
                cout << chk << " ";
            }
        }
        chk++;
    }
    return 0;
}

