//
//  main.cpp
//  HW6-Q07 递归实现PrintN函数
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
using namespace std;
void printN(int);
int main() {
    int n = 0;
    cin >> n;
    printN(n);
    return 0;
}
void printN(int x) {
    if (x) {
        printN(x - 1);
        cout << x << endl;
    }
    return;
}
