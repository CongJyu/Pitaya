//
//  main.cpp
//  Open-12 行有序方阵的第K小元素
//
//  Created by Rain Chen on 2021/11/20.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long n = 0, k = 0;
    long long a[90000] = {0};
    cin >> n >> k;
    for (int i = 0; i < n * n; i++) {
        cin >> a[i];
    }
    sort(a, a + n * n);
    cout << a[k - 1] << endl;
    return 0;
}
