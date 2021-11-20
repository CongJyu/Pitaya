//
//  main.cpp
//  Open-02 判断是否有这个数
//
//  Created by cyrain on 2021/11/17.
//

#include <iostream>
using namespace std;
int main() {
    int n = 0, k = 0;
    cin >> n >> k;
    int a[1000] = {0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == k) {
            cout << 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}
