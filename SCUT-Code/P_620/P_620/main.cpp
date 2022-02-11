//
//  main.cpp
//  P_620 6.50 Pass-by-Value vs. Pass-by-Reference
//
//  Created by Rain Chen on 2022/2/11.
//

#include <iostream>

using namespace std;

int tripleByValue(int);
void tripleByReference(int &);

int main() {
    int count = 0;
    while (true) {
        cin >> count;
        if (count == 0) {
            break;
        }
        cout << "Value of count before call to tripleByValue() is: "
        << count << "\nValue returned from tripleByValue() is: "
        << tripleByValue(count)
        << "\nValue of count (in main) after tripleCallByValue() is: "
        << count;
        cout << "\n\nValue of count before call to tripleByReference() is: "
        << count << endl;
        tripleByReference(count);
        cout << "Value of count (in main) after call to "
        << "tripleByReference() is: " << count << endl;
        cout << endl;
    }
    return 0;
}

int tripleByValue(int x) {
    return 3 * x;
}
void tripleByReference(int &x) {
    x *= 3;
    return;
}
