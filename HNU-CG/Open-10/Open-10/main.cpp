//
//  main.cpp
//  Open-10 多个有序数组的合并
//
//  Created by Rain Chen on 2021/11/20.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n = 0, m = 0;
    int a[100000] = {0};
    cin >> n >> m;
    for (int i = 0; i < m * n; i++) {
        cin >> a[i];
    }
    sort(a, a + m * n);
    for (int i = 0; i < m * n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
