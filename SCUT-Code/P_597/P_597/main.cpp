//
//  main.cpp
//  P_597 Tutorial 5.5 Optional
//
//  Created by Rain Chen on 2022/1/8.
//

#include <iostream>
#include <iomanip>
using namespace std;

void Fill_array(double [], int);
void Show_array(double [], int);
void Reverse_array(double [], int);

int main() {
    cout << fixed << setprecision(2);
    double a[10];
    Fill_array(a, 10);
    Show_array(a, 10);
    Reverse_array(a, 10);
    Show_array(a, 10);
    return 0;
}

void Fill_array(double a[], int num) {
    for (int i = 0; i < num; i++) {
        cin >> a[i];
    }
    return;
}

void Show_array(double a[], int num) {
    for (int i = 0; i < num; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return;
}

void Reverse_array(double a[], int num) {
    double * b = new double [num];
    for (int i = 0; i < num; i++) {
        b[num - i - 1] = a[i];
    }
    for (int i = 0; i < num; i++) {
        a[i] = b[i];
    }
    return;
}
