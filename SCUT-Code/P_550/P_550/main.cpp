//
//  main.cpp
//  P_550 Tutorial 2.2 Gas Mileage
//
//  Created by Rain Chen on 2022/1/9.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b;
    double total_mile = 0, total_gallons = 0;
    while (true) {
        cin >> a;
        if (a == -1) {
            break;
        }
        cin >> b;
        total_mile += a;
        total_gallons += b;
        cout << fixed << setprecision(6);
        cout << "MPG this trip: " << a / b << endl;
        cout << "Total MPG: " << total_mile / total_gallons << endl;
    }
    return 0;
}
