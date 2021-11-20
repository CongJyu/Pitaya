//
//  main.cpp
//  Open-01 求最大值
//
//  Created by cyrain on 2021/11/17.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n = 0;
    int a[1000] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + 1000);
    cout << a[999] << endl;
    return 0;
}
