//
//  main.cpp
//  Open-Part-03 周老师的年纪(递归)
//
//  Created by Rain Chen on 2021/11/20.
//

#include <iostream>
using namespace std;
int age(int x, int y) {
    int res = x;
    for (int i = 0; i < 4; i++) {
        res += y;
    }
    return res;
}
int main() {
    int a = 0, b = 0;
    cin >> a >> b;
    int result = age(a, b);
    cout << result << endl;
    return 0;
}
