//
//  main.cpp
//  Open-Part-01 周老师买万圣节糖果(递归)
//
//  Created by Rain Chen on 2021/11/20.
//

#include <iostream>
using namespace std;
int divideCnt(int n) {
    if (n == 1) return 1;
    if (n == 2) return 1;
    if (n == 3) return 2;
    if (n == 4) return 3;
    if (n == 5) return 5;
    return divideCnt(n - 1) + divideCnt(n - 3) + divideCnt(n - 5);
}
int main() {
    int n = 0;
    cin >> n;
    int result = divideCnt(n);
    cout << result << endl;
    return 0;
}
