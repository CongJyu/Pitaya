// T01P07

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double x[3] = {0}, y[3] = {0};
    while (true) {
        cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2];
        if (x[0] == 0 && y[0] == 0 && x[1] == 0 && y[1] == 0 && x[2] == 0 && y[2] == 0) {
            break;
        }
        double a = sqrt(pow(x[1] - x[0], 2) + pow(y[1] - y[0], 2));
        double b = sqrt(pow(x[2] - x[1], 2) + pow(y[2] - y[1], 2));
        double c = sqrt(pow(x[0] - x[2], 2) + pow(y[0] - y[2], 2));
        double p = (a + b + c) / 2;
        double area = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << fixed << setprecision(6) << area << endl;
    }
    return 0;
}
