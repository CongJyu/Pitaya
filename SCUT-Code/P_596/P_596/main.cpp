//
//  main.cpp
//  P_596 Tutorial 5.4 Perfect Numbers
//
//  Created by Rain Chen on 2022/1/8.
//

#include <iostream>
using namespace std;

bool isPerfect(unsigned int);
void printSum(unsigned int);

int main() {
    int maxnum = 0;
    while (true) {
        cin >> maxnum;
        if (maxnum == -1) {
            break;
        }
        for (unsigned int j = 2; j <= maxnum; ++j) {
            if (isPerfect(j)) {
                printSum(j);
            }
        }
        cout << endl;
    }
    return 0;
}

bool isPerfect(unsigned int x) {
    int sum = 0;
    for (int i = 1; i < x; i++) {
        if (x % i == 0) {
            sum += i;
        }
    }
    if (sum == x) {
        return true;
    } else {
        return false;
    }
}

void printSum(unsigned int x) {
    cout << x;
    for (int i = 1; i < x; i++) {
        if (x % i == 0) {
            if (i == 1) {
                cout << " = " << i;
            } else {
                cout << " + " << i;
            }
        }
    }
    cout << endl;
    return;
}
