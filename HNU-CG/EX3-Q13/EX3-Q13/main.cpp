//
//  main.cpp
//  EX3-Q13
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
int main() {
//  not sure
    using namespace std;
    int tax = 0, inc = 0, off = 0;
    cin >> inc >> off;
    if (inc <= 5000) {
        tax = 0;
    } else if (inc >= 5000 && inc <= 12000) {
        tax = (inc - 5000 - off) * 0.1 - 210;
    } else if (inc > 12000 && inc <= 25000) {
        tax = (inc - 5000 - off) * 0.2 - 1410;
    } else if (inc > 25000 && inc <= 35000) {
        tax = (inc - 5000 - off) * 0.25 - 2660;
    } else if (inc > 35000 && inc <= 55000) {
        tax = (inc - 5000 - off) * 0.3 - 4410;
    } else if (inc > 55000 && inc <= 80000) {
        tax = (inc - 5000 - off) * 0.35 - 7160;
    } else if (inc > 80000) {
        tax = (inc - 5000 - off) * 0.45 - 15160;
    }
    cout << tax << endl;
    return 0;
}
