//
//  main.cpp
//  EX6-Q02-01 片段编程题 小熊买糖果
//
//  Created by cyrain on 2021/11/15.
//  Something wrong: TLE

#include <iostream>
using namespace std;
int getCandy(int, int);
int main() {
    int k, r;
    cin >> k >> r;
    int result = getCandy(k, r);
    cout << result << endl;
    return 0;
}
int getCandy(int k, int r) {
    int num = 0;
    for (int i = 0; ; i++) {
        if ((10 * i + r) % k == 0) {
            num = (10 * i + r) / k;
            break;
        } else if (k % 10 == 0) {
            num = k / 10;
            break;
        }
    }
    return num;
}
