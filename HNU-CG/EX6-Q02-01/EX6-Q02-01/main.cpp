//
//  main.cpp
//  EX6-Q02-01 片段编程题 小熊买糖果
//
//  Created by cyrain on 2021/11/15.
//

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
int getCandy(int x, int y) {
    int result = 0, cnt = 0;
    for (result = 0; ; result++) {
        if ((result * 10 + y) % x == 0) {
            break;
        } else if (x % 10 == 0) {
            cnt = x / 10;
            return cnt;
        } else {
            continue;
        }
    }
    cnt = (result * 10 + y) / x;
    return cnt;
}
