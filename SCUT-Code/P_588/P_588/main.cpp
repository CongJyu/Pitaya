//
//  main.cpp
//  P_588
//
//  Created by cyrain on 2021/11/4.
//

#include <iostream>
#include <iomanip>
using namespace std;
const double p1 = 2.98;
const double p2 = 4.50;
const double p3 = 9.98;
const double p4 = 4.49;
const double p5 = 6.87;
double one = 0.0;
double two = 0.0;
double three = 0.0;
double four = 0.0;
double five = 0.0;
void total(int, int);
int main() {
    int n = 0, q = 0;
    while (true) {
        cin >> n;
        if (n == -1) {
            break;
        } else {
            cin >> q;
            total(n, q);
        }
    }
    cout << "Product 1: $" << fixed << setprecision(2) << one << endl;
    cout << "Product 2: $" << fixed << setprecision(2) << two << endl;
    cout << "Product 3: $" << fixed << setprecision(2) << three << endl;
    cout << "Product 4: $" << fixed << setprecision(2) << four << endl;
    cout << "Product 5: $" << fixed << setprecision(2) << five << endl;
    cout << "total: $" << one + two + three + four + five << endl;
    return 0;
}
void total(int x, int y) {
    switch (x) {
        case 1: one += p1 * y;
            break;
        case 2: two += p2 * y;
            break;
        case 3: three += p3 * y;
            break;
        case 4: four += p4 * y;
            break;
        case 5: five += p5 * y;
            break;
    }
}
