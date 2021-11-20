//
//  main.cpp
//  HW4-Q09 化验诊断
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
using namespace std;
int i, j;
void cp(string, double, double, int, int, int);
int main() {
    int k;
    cin >> k;
    string gender[100];
    double wbc[100], rbc[100];
    int hgb[100], hct[100], plt[100];
    for (i = 0; i < k; i++) {
        cin >> gender[i] >> wbc[i] >> rbc[i] >> hgb[i] >> hct[i] >> plt[i];
    }
    for (j = 0; j < i; j++) {
        cp(gender[j], wbc[j], rbc[j], hgb[j], hct[j], plt[j]);
    }
    return 0;
}
void cp(string g, double a, double b, int c, int d, int e) {
    int counter = 0;
    if (g == "female") {
        if (a < 4.0 || a > 10.0) {
            counter++;
        }
        if (b < 3.5 || b > 5.5) {
            counter++;
        }
        if (c < 110 || c > 150) {
            counter++;
        }
        if (d < 36 || d > 40) {
            counter++;
        }
        if (e < 100 || e > 300) {
            counter++;
        }
        if (counter == 0) {
            counter = 0;
            cout << "normal" << endl;
        } else {
            cout << counter << endl;
            counter = 0;
        }
    } else {
        if (a < 4.0 || a > 10.0) {
            counter++;
        }
        if (b < 3.5 || b > 5.5) {
            counter++;
        }
        if (c < 120 || c > 160) {
            counter++;
        }
        if (d < 42 || d > 48) {
            counter++;
        }
        if (e < 100 || e > 300) {
            counter++;
        }
        if (counter == 0) {
            cout << "normal" << endl;
        } else {
            cout << counter << endl;
            counter = 0;
        }
    }
}
