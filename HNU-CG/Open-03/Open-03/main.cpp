//
//  main.cpp
//  Open-03 3的倍数的个数
//
//  Created by cyrain on 2021/11/17.
//

#include <iostream>
using namespace std;
int main() {
    int n = 0, a[1000] = {0}, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 3 == 0) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
