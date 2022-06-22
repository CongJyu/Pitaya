// t02p04

#include <iostream>

using namespace std;

int main() {
    int num1 = 0, num2 = 0;
    while (cin >> num1 >> num2) {
        // the first number
        int sum1 = 0;
        for (int i = 1; i < num1; ++i) {
            if (num1 % i == 0) {
                sum1 += i;
            }
        }
        if (sum1 != num2) {
            cout << "NO" << endl;
            continue;
        }
        // the second number
        int sum2 = 0;
        for (int i = 1; i < num2; ++i) {
            if (num2 % i == 0) {
                sum2 += i;
            }
        }
        if (sum1 == num2 && sum2 == num1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
