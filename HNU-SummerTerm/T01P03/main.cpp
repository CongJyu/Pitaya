// t01p03

#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int *x = new int[n];
    int *y = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i];
    }
    int x_negative = 0, x_positive = 0;
    for (int i = 0; i < n; ++i) {
        if (x[i] < 0) {
            x_negative++;
        } else {
            x_positive++;
        }
    }
    if ((x_negative == 1 || x_positive == 1) || (x_negative == 0 && x_positive != 0) ||
        (x_positive == 0 && x_negative != 0)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
