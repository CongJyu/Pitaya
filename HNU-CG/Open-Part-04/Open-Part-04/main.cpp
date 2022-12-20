//
//  main.cpp
//  Open-Part-04 周老师的贪玩小精灵(递归)
//
//  Created by Rain Chen on 2021/11/28.
//

#include <iostream>
using namespace std;
int incantationCounts(int n) {
    int k = 0;
    if (n == 1) {
        return 0;
    } else {
        k++;
    }
    if (n % 2 == 0) {
        k += incantationCounts(n /= 2);
    } else if (n % 2 == 1) {
        k += incantationCounts(3 * n + 1);
    }
    return k;
}
int main() {
    int n;
    cin >> n;
    int result = incantationCounts(n);
    cout << result;
    return 0;
}
