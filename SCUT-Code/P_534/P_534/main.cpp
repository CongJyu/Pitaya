//
//  main.cpp
//  P_534
//
//  Created by cyrain on 2021/10/26.
//

#include <iostream>
#include <algorithm>
int main() {
    using namespace std;
    int arr[5] = {0};
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 4);
    cout << "Largest is " << arr[4] << endl;
    cout << "Smallest is " << arr[0] << endl;
    return 0;
}
