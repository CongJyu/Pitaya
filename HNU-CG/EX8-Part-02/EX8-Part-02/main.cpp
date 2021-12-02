//
//  main.cpp
//  EX8-Part-02 字符串反转（指针实现）
//
//  Created by Rain Chen on 2021/11/30.
//

#include <iostream>
#include <cstring>
using namespace std;
void reverseStr(char * s);
int main() {
    char str[201];
    gets(str);
    reverseStr(str);
    puts(str);
    return 0;
}
void reverseStr(char * s) {
    char * p = s, * q = s;
    while (*q) {
        (*q)++;
    }
    *q = *(s + 201);
    while (p < q) {
        int tmp;
        tmp = *p;
        *p = *q;
        *q = tmp;
    }
}
