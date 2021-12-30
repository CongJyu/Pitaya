//
//  main.cpp
//  P_720 共线
//
//  Created by Rain Chen on 2021/12/28.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long n = 0;
    cin >> n;
    long long * x = new long long [n];
    long long * y = new long long [n];
    for (long long i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    long long cnt = 0;
    long long size = n * (n - 1) / 2;
    double * k = new double [size];
    long long kk = 0;
    for (long long i = 0; i < n; i++) {
        for (long long j = i; j < n; j++) {
            k[kk] = (y[i] - y[j]) / (x[i] - x[j]);
            kk++;
        }
    }
    sort(k, k + size);
    long long mark = 0;
    for (long long i = 0; i < size; i++) {
        if (k[i] == k[i + 1]) {
            cnt++;
        } else {
            if (mark < cnt) {
                mark = cnt;
                cnt = 0;
            }
        }
    }
    if (mark >= (n / 2)) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    delete [] x;
    delete [] y;
    delete [] k;
    return 0;
}
