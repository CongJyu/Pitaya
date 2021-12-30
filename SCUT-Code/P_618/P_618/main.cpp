//
//  main.cpp
//  P_618 Fibonacci Series: Iterative Solution
//
//  Created by Rain Chen on 2021/12/28.
//

#include <iostream>
using namespace std;

unsigned int fibonacci(unsigned int); // function prototype

int main() {
    unsigned int max_counter;
    while (true) {
        cin >> max_counter;
        if (max_counter==0) {
            break;
        }
        cout << fibonacci(max_counter)<<endl;
    }
} // end main

unsigned int fibonacci(unsigned int n) {
    unsigned int a = 1, b = 1, c = 1;
    for (int i = 0; i < n - 1; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return a;
}
