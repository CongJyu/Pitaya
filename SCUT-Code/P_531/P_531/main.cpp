//
//  main.cpp
//  P_531
//
//  Created by cyrain on 2021/10/26.
//

#include <iostream>
int main() {
    using namespace std;
    int a = 0, b = 0;
    cin >> a >> b;
    if (a > b) {
        cout << a << " is larger." << endl;
    } else if (b > a) {
        cout << b << " is larger." << endl;
    } else {
        cout << "These numbers are equal." << endl;
    }
    return 0;
}
