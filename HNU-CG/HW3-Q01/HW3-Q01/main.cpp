//
//  main.cpp
//  HW3-Q01 找最小值
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
#include <algorithm>
int main() {
    using namespace std;
    int n = 0;
    cin >> n;    //  enter n numbers
    long long arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << arr[0] << endl;
    return 0;
}
