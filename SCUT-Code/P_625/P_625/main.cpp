//
//  main.cpp
//  P_625 Tutorial 7.4 Circle Area
//
//  Created by Rain Chen on 2022/1/25.
//

#include <iostream>
#include <iomanip>
using namespace std;

const double pi = 3.14;

int main() {
    double r = 0;
    while (true) {
        cin >> r;
        if (r == -1) {
            break;
        }
        cout << fixed << setprecision(5);
        cout << pi * r * r << endl;
    }
    return 0;
}
