//
//  main.cpp
//  P_498 输入输出之多组数据处理3.0
//
//  Created by Rain Chen on 2022/3/17.
//

#include <iostream>

using namespace std;

int main() {
    int a = 0, b = 0;
    while (cin >> a >> b) {
        if (a == 0 && b == 0) {
            break;
        }
        cout << a + b << endl;
    }
    return 0;
}
