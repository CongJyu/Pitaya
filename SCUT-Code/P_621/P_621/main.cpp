//
//  main.cpp
//  P_621 6.52 Function Template minimum
//
//  Created by Rain Chen on 2022/1/25.
//

#include <iostream>
using namespace std;

template<class T>
T minimum(T a, T b) {
    return ((a > b) ? b : a);
}

int main() {
    while (true) {
        int int1 = 0;
        cin >> int1;
        if (int1 == -1) {
            break;
        }
        int int2 = 0;
        cin >> int2;
        cout << "The smaller integer value is: "
        << minimum(int1, int2) << endl;
        char char1 = ' ';
        char char2 = ' ';
        cin >> char1 >> char2;
        cout << "The smaller character value is: "
        << minimum(char1, char2) << endl;
        double double1 = 0;
        double double2 = 0;
        cin >> double1 >> double2;
        cout << "The smaller double value is: "
        << minimum(double1, double2) << endl;
        cout << endl;
    }
    return 0;
}
