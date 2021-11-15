//
//  main.cpp
//  HW5-Q02 数组排序
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
#include <algorithm>
int main() {
    using namespace std;
    int n = 0;
    cin >> n;
    int arr[100] = {0};
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }
    cout << endl;
    return 0;
}
