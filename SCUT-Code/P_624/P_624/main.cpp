//
//  main.cpp
//  P_624 Tutorial 7.3 Function Template swap_value
//
//  Created by Rain Chen on 2022/1/25.
//

#include <iostream>
using namespace std;

//  TODO: function template
template<class T>
void swap_value(T& a, T& b) {
    T tmp = a;
    a = b;
    b = tmp;
    return;
}

int main() {
    int int1 = 0, int2 = 0;
    char char1 = 0, char2 = 0;
    double double1 = 0, double2 = 0;
    while (true) {
        cin >> int1;
        if (int1 == -1) {
            break;
        }
        cin >> int2;
        swap_value(int1, int2);
        cout << int1 << " " << int2 << endl;
        cin >> char1 >> char2;
        swap_value(char1, char2);
        cout << char1 << " " << char2 << endl;
        cin >> double1 >> double2;
        swap_value(double1, double2);
        cout << double1 << " " << double2 << endl;
    }
    return 0;
}
