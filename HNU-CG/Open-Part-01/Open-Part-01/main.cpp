//
//  main.cpp
//  Open-Part-01 周老师买万圣节糖果(递归)
//
//  Created by Rain Chen on 2021/11/20.
//

#include <iostream>
using namespace std;
int divideCnt(int n) {
    int cnt = 0;
    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0 && i != 0) continue;
        for (int j = 0; j < n; j++) {
            if (j % 2 == 0 && j != 0) continue;
            for (int k = 0; k < n; k++) {
                if (k % 2 == 0 && k != 0) continue;
                if (i + j + k == n) {
                    cnt++;
                } else {
                    continue;
                }
            }
        }
    }
    return cnt;
}
int main() {
    int n = 0;
    cin >> n;
    int result = divideCnt(n);
    cout << result << endl;
    return 0;
}
