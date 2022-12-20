// p0210

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int *credit{new int[n]};
    for (int i{}; i < n; ++i) {
        cin >> credit[i];
    }
    double *get_score{new double[n]};
    for (int i{}; i < n; ++i) {
        cin >> get_score[i];
    }
    double *grade{new double[n]};
    for (int i{}; i < n; ++i) {
        if (get_score[i] < 60) {
            grade[i] = 0;
        } else if (get_score[i] >= 60 and get_score[i] <= 63) {
            grade[i] = 1.0;
        } else if (get_score[i] >= 64 and get_score[i] <= 67) {
            grade[i] = 1.5;
        } else if (get_score[i] >= 68 and get_score[i] <= 71) {
            grade[i] = 2.0;
        } else if (get_score[i] >= 72 and get_score[i] <= 74) {
            grade[i] = 2.3;
        } else if (get_score[i] >= 75 and get_score[i] <= 77) {
            grade[i] = 2.7;
        } else if (get_score[i] >= 76 and get_score[i] <= 81) {
            grade[i] = 3.0;
        } else if (get_score[i] >= 82 and get_score[i] <= 84) {
            grade[i] = 3.3;
        } else if (get_score[i] >= 85 and get_score[i] <= 89) {
            grade[i] = 3.7;
        } else if (get_score[i] >= 90 and get_score[i] <= 100) {
            grade[i] = 4.0;
        }
    }
    double total_grade{}, total_credit{};
    for (int i{}; i < n; ++i) {
        total_grade += grade[i] * credit[i];
        total_credit += credit[i];
    }
    double gpa{total_grade / total_credit};
    cout << fixed << setprecision(2) << gpa << endl;
    delete[] credit;
    delete[] get_score;
    delete[] grade;
    return 0;
}
