//
//  main.cpp
//  P_628 Tutorial 8.2 Print an array
//
//  Created by Rain Chen on 2022/1/25.
//

#include <iostream>
#include <array>

using namespace std;

const int SIZE = 30;

void printArray(array<int, SIZE> &, size_t, size_t);

int main() {
    array<int, SIZE> values = {};
    unsigned int i = 0;
    while (i < SIZE) {
        int value = 0;
        cin >> value;
        values[i++] = value;
    }
    printArray(values, 0, SIZE - 1);
    cout << endl;
    return 0;
}

void printArray(array<int, SIZE> &values, size_t low, size_t high) {
    if (!values.empty()) {
        for (auto val = values.begin(); val < values.end(); val++) {
            cout << *val << " ";
        }
    }
    cout << endl;
    return;
}
