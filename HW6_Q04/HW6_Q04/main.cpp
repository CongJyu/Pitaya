//
//  main.cpp
//  HW6_Q04 求指数
//
//  Created by cyrain on 2021/11/6.
//

#include <iostream>
using namespace std;
int exponent(int, int);
int main() {
    int num = 0;
    int k = 0;
    cin >> num >> k;
    cout << exponent(num, k) << endl;
    return 0;
}
int exponent(int x, int y) {
    int cnt = 0;
    int cp = 1;
    while (true) {
        cp = cp * y;
        cnt++;
        if (cp == x) {
            return cnt;
        } else if (cp > x){
            return 0;
        }
    }
}
