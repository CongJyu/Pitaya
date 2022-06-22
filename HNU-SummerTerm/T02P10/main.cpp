// t02p10

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    auto *credit = new double[n];
    auto *score = new double[n];
    auto *point = new double[n];
    for (int i = 0; i < n; ++i) {
        cin >> credit[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> score[i];
        if (score[i] < 60) {
            point[i] = 0;
        } else if (score[i] >= 60 && score[i] <= 63) {
            point[i] = 1.0;
        } else if (score[i] >= 64 && score[i] <= 67) {
            point[i] = 1.5;
        } else if (score[i] >= 68 && score[i] <= 71) {
            point[i] = 2.0;
        } else if (score[i] >= 72 && score[i] <= 74) {
            point[i] = 2.3;
        } else if (score[i] >= 75 && score[i] <= 77) {
            point[i] = 2.7;
        } else if (score[i] >= 78 && score[i] <= 81) {
            point[i] = 3.0;
        } else if (score[i] >= 82 && score[i] <= 84) {
            point[i] = 3.3;
        } else if (score[i] >= 85 && score[i] <= 89) {
            point[i] = 3.7;
        } else if (score[i] >= 90 && score[i] <= 100) {
            point[i] = 4.0;
        }
    }
    double total = 0, credit_total = 0;
    for (int i = 0; i < n; ++i) {
        total += credit[i] * point[i];
    }
    for (int i = 0; i < n; ++i) {
        credit_total += credit[i];
    }
    total /= credit_total;
    delete[] credit;
    delete[] score;
    delete[] point;
    cout << fixed << setprecision(2) << total << endl;
    return 0;
}
