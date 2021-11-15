//
//  main.cpp
//  P_535
//
//  Created by cyrain on 2021/10/26.
//

#include <iostream>
int main() {
    using namespace std;
    int a = 0;
    cin >> a;
    if (a % 2 == 0) {
        cout << "The integer " << a << " is even." << endl;
    } else {
        cout << "The integer " << a << " is odd." << endl;
    }
    return 0;
}
