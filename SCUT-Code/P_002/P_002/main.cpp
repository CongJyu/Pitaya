//
//  main.cpp
//  P_002 第 k 个数
//
//  Created by Rain Chen on 2022/1/9.
//

#include <iostream>
using namespace std;
int main() {
    long long n = 0;
    while (cin >> n) {
        int k = 0;
        int * arr = new int [n];
        for (long long i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k;
        cout << arr[k - 1] << endl;
    }
    return 0;
}
