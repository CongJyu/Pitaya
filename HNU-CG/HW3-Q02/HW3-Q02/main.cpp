//
//  main.cpp
//  HW3-Q02 十进制转二进制
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
int main() {
    using namespace std;
    int n = 0, i = 0;
    long long a[1000000];
    cin >> n;
    for (i = 0; n > 0; ++i) {
        a[i] = n % 2;
        n = n / 2;
    }
    for (i = i - 1; i >= 0; --i) {
        cout << a[i];
    }
    cout << endl;
    return 0;
}
