//
//  main.cpp
//  P_590
//
//  Created by cyrain on 2021/11/4.
//

#include <iostream>
using namespace std;
void month2Days(int);
int main() {
    int n = 0;
    while (n != -1) {
        cin >> n;
        month2Days(n);
    }
    return 0;
}
void month2Days(int x) {
    switch (x) {
        case 1: cout << 31 << endl;
            break;
        case 2: cout << 28 << endl;
            break;
        case 3: cout << 31 << endl;
            break;
        case 4: cout << 30 << endl;
            break;
        case 5: cout << 31 << endl;
            break;
        case 6: cout << 30 << endl;
            break;
        case 7: cout << 31 << endl;
            break;
        case 8: cout << 31 << endl;
            break;
        case 9: cout << 30 << endl;
            break;
        case 10: cout << 31 << endl;
            break;
        case 11: cout << 30 << endl;
            break;
        case 12: cout << 31 << endl;
            break;
    }
}
