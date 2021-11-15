//
//  main.cpp
//  EX3-Q14
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
int main() {
    using namespace std;
    int arr[4];
    int ex = 0;
    int a = 0, b = 0, c = 0;
    //  a+b <= a+c <= b+c <= a+b+c
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (arr[j - 1] > arr[j]) {
                ex = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] =  ex;
            }
        }
    }
    a = arr[3] - arr[2];
    b = arr[3] - arr[1];
    c = arr[3] - arr[0];
    cout << a << " " << b << " " << c << endl;
    return 0;
}
