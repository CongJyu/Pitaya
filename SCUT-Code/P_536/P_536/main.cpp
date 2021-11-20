//
//  main.cpp
//  P_536
//
//  Created by cyrain on 2021/10/26.
//

#include <iostream>
int main() {
    using namespace std;
    int a = 0, b = 0;
    cin >> a >> b;
    if (a % b == 0) {
        cout << a << " is a multiple of " << b << endl;
    } else {
        cout << a << " is not a multiple of " << b << endl;
    }
    return 0;
}
