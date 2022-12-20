//
//  main.cpp
//  P_556 4.34 Factorial
//
//  Created by Rain Chen on 2022/1/9.
//

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b, c, d;
    while (true) {
        cin >> a;
        if (a == -1) {
            break;
        }
        cin >> b >> c >> d;
        //  part a
        {
            int result = 1, out = a;
            while (out >= 1) {
                result *= out;
                out--;
            }
            if (a == 0) {
                result = 0;
            }
            cout << "Part A: " << a << "! is " << result << endl;
        }
        //  part b
        {
            double e_result = 0.0;
            for (int i = 0; i < b; i++) {
                int result = 1, out = i;
                while (out >= 1) {
                    result *= out;
                    out--;
                }
                e_result += 1.0 / result;
            }
            cout << "Part B: e is " << e_result << endl;
        }
        //  part c
        {
            double ex_result = 0.0;
            for (int i = 0; i < d; i++) {
                int result = 1, out = i;
                while (out >= 1) {
                    result *= out;
                    out--;
                }
                int x_result = 1;
                for (int j = 0; j < i; j++) {
                    x_result *= c;
                }
                ex_result += (x_result * 1.0) / (result * 1.0);
            }
            cout << "Part C: e to the " << c << " is " << ex_result << endl;
        }
        cout << endl;
    }
    return 0;
}
