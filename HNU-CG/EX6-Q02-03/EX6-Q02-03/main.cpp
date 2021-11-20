//
//  main.cpp
//  EX6-Q02-03 片段编程题 函数传参
//
//  Created by cyrain on 2021/11/16.
//

#include <iostream>
using namespace std;
void swap1(int a, int b);
void swap2(int *a, int *b);
void swap3(int &a, int &b);
int main() {
    int a, b;
    cin >> a >> b;
    swap1(a, b);
    printf("%d %d\n", a, b);
    swap2(&a, &b);
    printf("%d %d\n", a, b);
    swap3(a, b);
    printf("%d %d\n", a, b);
    return 0;
}
void swap1(int a, int b) {
    int t;
    t = a;
    a = b;
    b = t;
}
void swap2(int *a, int *b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
void swap3(int &a, int &b) {
    int t;
    t = a;
    a = b;
    b = t;
}
