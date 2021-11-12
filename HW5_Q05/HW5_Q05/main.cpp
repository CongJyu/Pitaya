//
//  main.cpp
//  HW5_Q05 字符串判等
//
//  Created by cyrain on 2021/10/26.
//

#include <iostream>
#include <cstring>
#include <cstdio>
void judge(char * c);
int main() {
    using namespace std;
    char s1[100];
    char s2[100];
    gets(s1);
    gets(s2);
    judge(s1);
    judge(s2);
    if (strcmp(s1, s2) == 0) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
    return 0;
}
void judge(char * c) {
    int j = 0;
    for (int i = 0; i < strlen(c); i++) {
        if (c[i] == ' ') {
            continue;
        }
        if (c[i] >= 'A' && c[i] <= 'Z') {
            c[j++] = c[i] + 32;
        } else {
            c[j++] = c[i];
        }
    }
    c[j] = '\0';
}
