//
//  main.cpp
//  HW6-Q09 判断回文数
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
using namespace std;
bool isCycle(int);
int main() {
    using namespace std;
    int n = 0;
    cin >> n;
    isCycle(n);
    return 0;
}
bool isCycle(int x) {
    int temp = 0;
    int number = x;
    while (number) {
        temp = temp * 10 + (number % 10);
        number = number / 10;
    }
    if (x == temp) {
        cout << "true" << endl;
        return true;
    } else {
        cout << "false" << endl;
        return false;
    }
}
