//
//  main.cpp
//  P_617 6.36 Recursive Exponentiation
//
//  Created by Rain Chen on 2021/12/28.
//

#include <iostream>
using namespace std;

unsigned long power(unsigned long, unsigned long); // function prototype

int main() {
    unsigned long b = 0; // base
    unsigned long e = 0; // exponent

    // cout << "Enter a base and an exponent: ";
    while (true) {
        cin >> b;
        if (b == 0) {
            break;
        }
        cin >> e;
        // calculate and display b^e
        cout << power(b, e) << endl;
     }
} // end main

unsigned long power(unsigned long base, unsigned long exponent) {
    unsigned long result = 1;
    for (long i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}
