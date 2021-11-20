//
//  main.cpp
//  HW3-Q07 ch4-3 判断“水仙花数”
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
int main() {
    using namespace std;
    int n = 0, cons = 0, a = 0, b = 0, c = 0;
    cin >> n;
    a = n / 100;
    b = (n / 10) % 10;
    c = n % 10;
    cons = a * a * a + b * b * b + c * c * c;
    if (cons == n) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
