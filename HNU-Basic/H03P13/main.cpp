// h03p13

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int month = 0, minus = 0;
    cin >> month >> minus;
    double rate = 0, speed = 0;
    month -= 5000;
    if (month <= 0) {
        cout << 0 << endl;
        return 0;
    }
    if (month <= 3000) {
        rate = 0.03;
        speed = 0;
    } else if (month > 3000 && month <= 12000) {
        rate = 0.1;
        speed = 210;
    } else if (month > 12000 && month <= 25000) {
        rate = 0.2;
        speed = 1410;
    } else if (month > 25000 && month <= 35000) {
        rate = 0.25;
        speed = 2660;
    } else if (month > 35000 && month <= 55000) {
        rate = 0.3;
        speed = 4410;
    } else if (month > 55000 && month <= 80000) {
        rate = 0.35;
        speed = 7160;
    } else if (month > 80000) {
        rate = 0.45;
        speed = 15160;
    }
    double tax = (month - minus) * rate - speed;
    cout << tax << endl;
    return 0;
}
