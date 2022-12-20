// p0107

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    double x1{}, y1{}, x2{}, y2{}, x3{}, y3{};
    while (true) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        if (x1 == 0 and y1 == 0 and x2 == 0 and y2 == 0 and x3 == 0 and y3 == 0) {
            break;
        }
        double a{sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2))};
        double b{sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3))};
        double c{sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3))};
        double p{(a + b + c) / 2.0};
        double area{sqrt(p * (p - a) * (p - b) * (p - c))};
        cout << fixed << setprecision(6) << area << endl;
    }
    return 0;
}
