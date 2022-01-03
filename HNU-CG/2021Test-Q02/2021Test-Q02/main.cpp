//
//  main.cpp
//  2021Test-Q02 中文名拼音形式转换
//
//  Created by Rain Chen on 2022/1/1.
//

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
    string first;
    string family;
    cin >> first >> family;
    long long size1 = sizeof(first);
    long long size2 = sizeof(family);
    char firstn[size1];
    char familyn[size2];
    strcpy(firstn, first.c_str());
    strcpy(familyn, family.c_str());
    for (long long i = 0; i < size2 - 1; i++) {
        if (familyn[i] >= '0' && familyn[i] <= '9') {
            familyn[i] = '\0';
        } else if (familyn[i] >= 'A' && familyn[i] <= 'Z') {
            familyn[i] += 32;
        }
    }
    for (long long i = 0; i < size2 - 1; i++) {
        cout << familyn[i];
    }
    for (long long i = 0; i < size1 - 1; i++) {
        if (firstn[i] >= '0' && firstn[i] <= '9') {
            firstn[i] = '\0';
        } else if (firstn[i] >= 'A' && firstn[i] <= 'Z') {
            firstn[i] += 32;
        }
    }
    for (long long i = 0; i < size1 - 1; i++) {
        cout << firstn[i];
    }
    cout << endl;
    return 0;
}
