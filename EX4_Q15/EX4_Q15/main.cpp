//
//  main.cpp
//  EX4_Q15 松雅旅馆的自动门
//
//  Created by cyrain on 2021/10/24.
//

#include <iostream>
#include <algorithm>
int main() {
    using namespace std;
    int n, m, a, d;
    cin >> n >> m >> a >> d;
    const int size = n + m;
    int x[size];
    for (int i = 0; i < n; i++) {
        x[i] = (i + 1) * a;
    }
    for (int y = n; y < n + m; y++) {
        cin >> x[y];
    }
    sort(x, x + (n + m));
    int num = 1, k = x[0];
    for (int r = 1; r < n + m; r++) {
        if (x[r] > (k + d)) {
            k = x[r];
            num++;
        }
    }
    cout << num << endl;
    return 0;
}
