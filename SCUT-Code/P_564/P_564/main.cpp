//
//  main.cpp
//  P_564 5.21 Calculating Salaries
//
//  Created by Rain Chen on 2022/1/9.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int code = 0;
    while (true) {
        cin >> code;
        if (code == -1) {
            break;   
        } else if (code == 1) {
            double salary;
            cin >> salary;
            cout << fixed << setprecision(2);
            cout << "The manager's pay is $" << salary << endl;
        } else if (code == 2) {
            double salary, hours;
            cin >> salary >> hours;
            if (hours > 40) {
                cout << "Worker's pay is $";
                cout << fixed << setprecision(2);
                cout << 40 * salary + (hours - 40) * salary * 1.5 << endl;
            } else {
                cout << "Worker's pay is $";
                cout << fixed << setprecision(2);
                cout << hours * salary << endl;
            }
        } else if (code == 3) {
            double gross;
            cin >> gross;
            cout << fixed << setprecision(2);
            cout << "Commission worker's pay is $";
            cout << 250 + 5.7 * 0.01 * gross << endl;
        } else if (code == 4) {
            double piece, wage;
            cin >> piece >> wage;
            cout << fixed << setprecision(2);
            cout << "Pieceworker's pay is $";
            cout << piece * wage << endl;
        } else {
            cout << "Invalid pay code." << endl;
            continue;
        }
    }
    return 0;
}
