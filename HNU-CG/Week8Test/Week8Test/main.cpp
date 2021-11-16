//
//  main.cpp
//  Week8Test CCF 201604-1 折点计数
//
//  Created by cyrain on 2021/11/16.
//

#include <iostream>
using namespace std;
int main() {
    int n = 0;
    int a[1001] = {0};
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n - 1; i++) {
        if ((a[i] > a[i - 1]) && (a[i] > a[i + 1])) {
            cnt++;
        } else if ((a[i] < a[i - 1]) && (a[i] < a[i + 1])) {
            cnt++;
        } else {
            continue;
        }
    }
    cout << cnt << endl;
    return 0;
}
