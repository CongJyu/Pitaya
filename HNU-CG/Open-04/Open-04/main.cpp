//
//  main.cpp
//  Open-04 输出偶数
//
//  Created by cyrain on 2021/11/17.
//

#include <iostream>
using namespace std;
int main() {
    int n = 0, a[1000] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
