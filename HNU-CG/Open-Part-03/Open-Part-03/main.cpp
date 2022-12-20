//
//  main.cpp
//  Open-Part-03 周老师的年纪(递归)
//
//  Created by Rain Chen on 2021/11/20.
//

#include <iostream>
using namespace std;
int age(int n, int m, int y) {
    n += m;
    y++;
    if (y < 4) {
        return age(n, m, y);
    } else {
        return n + m;
    }
}
int main() {
    int a, b, c = 1;
    cin >> a >> b;
    int result = age(a, b, c);
    cout << result;
    return 0;
}
