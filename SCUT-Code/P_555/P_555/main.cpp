//
//  main.cpp
//  P_555 4.33 Sides of a Right Triangle
//
//  Created by Rain Chen on 2022/1/9.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a[3];
    while (true) {
        cin >> a[0];
        if (a[0] == -1) {
            break;
        }
        cin >> a[1] >> a[2];
        sort(a, a + 3);
        if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2]) {
            cout << "These are the sides of a right triangle." << endl;
        } else {
            cout << "These do not form a right triangle." << endl;
        }
    }
    return 0;
}
