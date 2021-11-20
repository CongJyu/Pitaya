//
//  main.cpp
//  EX3-Q06
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
int main() {
    using namespace std;
    const int n = 4;
    int ex = 0;
    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 1; j <= n - 1; j++) {
            if (arr[j - 1] < arr[j]) {
                ex = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] =  ex;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
