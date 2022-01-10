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

void cleanStr(char input[]) {
    int j_new = 0;
    int i_old = 0;
    while (i_old < (int)strlen(input)) {
        if (input[i_old] >= '0' && input[i_old] <= '9') {
            i_old++;
            continue;
        } else {
            input[j_new++] = input[i_old++];
        }
    }
    input[j_new] = '\0';
}

void transfer(char input[], char output[]) {
    cleanStr(input);
    int idx_space = 0;
    while (input[idx_space] != ' ') {
        idx_space++;
    }
    int i_output = 0;
    for (int i = idx_space + 1; input[i] != '\0'; i++) {
        if (i == idx_space + 1) {
            output[i_output++] = input[i] + 'a' - 'A';
            continue;
        }
        output[i_output++] = input[i];
    }
    for (int i = 0; i < idx_space; i++) {
        if (i == 0) {
            output[i_output++] = input[i] + 'a' - 'A';
            continue;
        }
        output[i_output++] = input[i];
    }
    output[i_output] = '\0';
}

int main() {
    char name[100];
    char newName[100];
    cin.getline(name, 99);
    transfer(name, newName);
    cout << newName << endl;
    return 0;
}
