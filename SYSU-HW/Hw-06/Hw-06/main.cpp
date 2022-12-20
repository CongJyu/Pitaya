//
//  main.cpp
//  Hw-06
//
//  Created by Rain Chen on 2021/11/20.
//

#include <stdio.h>
int main() {
    int a = 0, b = 0;
    int sum = 0, del = 0, pro = 0, div = 0;
    char sg;
    scanf("%d%c%d", &a, &sg, &b);
    if (sg == '+') {
        sum = a + b;
        printf("%d+%d=%d\n", a, b, sum);
    } else if (sg == '-') {
        del = a - b;
        printf("%d-%d=%d\n", a, b, del);
    } else if (sg == '*') {
        pro = a * b;
        printf("%d*%d=%d\n", a, b, pro);
    } else if (sg == '/') {
        div = a / b;
        printf("%d/%d=%d\n", a, b, pro);
    }
    return 0;
}
