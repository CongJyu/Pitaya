//
//  main.cpp
//  P_730 Elo的聚会
//
//  Created by Rain Chen on 2021/12/28.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long * a = new long long [n];
    long long * b = new long long [n];
    long long * c = new long long [n];
    for (long long i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        c[i] = a[i] + b[i];
    }
    sort(c, c + n);
    delete [] a;
    delete [] b;
    long long * cnt = new long long [n];
    long long j = 0;
    for (long long i = 0; i < n; i++) {
        if (c[i] == c[i + 1]) {
            cnt[j]++;
        } else if (c[i] != c[i + 1]) {
            j++;
            cnt[j]++;
        }
    }
    sort(cnt, cnt + n);
    cout << cnt[n - 1] + 1 << endl;
    delete [] cnt;
    delete [] c;
    return 0;
}
