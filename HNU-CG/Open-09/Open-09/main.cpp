//
//  main.cpp
//  Open-09 正整数重排列
//
//  Created by Rain Chen on 2021/11/20.
//

#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int, int);
int main() {
    int n = 0, tmp = 0, act = 0, bct = 0;
    int a[100000] = {0};
    int b[100000] = {0};
    cin >> n;
    for (int i = 0, j = 0; (i + j) < n; ) {
        cin >> tmp;
        if (tmp % 3 == 0) {
            a[i] = tmp;
            i++;
            act++;
        } else {
            b[j] = tmp;
            j++;
            bct++;
        }
    }
    sort(a, a + act, cmp);
    sort(b, b + bct);
    for (int i = 0; i < act; i++) {
        cout << a[i] << " ";
    }
    for (int i = 0; i < bct; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}
bool cmp(int a, int b) {
    return a > b;
}
