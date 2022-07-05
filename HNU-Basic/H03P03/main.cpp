// h03p03

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int month_salary = 0, distance = 0;
    char rest;
    cin >> month_salary >> rest >> distance;
    int counter = 0;
    if (month_salary >= 5000) {
        counter++;
    }
    if (rest == 'y') {
        counter++;
    }
    if (distance <= 2000) {
        counter++;
    }
    if (counter >= 2) {
        cout << "Accept" << endl;
    } else {
        cout << "Refuse" << endl;
    }
    return 0;
}
