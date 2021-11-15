//
//  main.cpp
//  P_592
//
//  Created by cyrain on 2021/11/4.
//

#include <iostream>
int main() {
    using namespace std;
    int n = 0;
    int a[1050] = {0};
    while (1) {
        cin >> n;
        if (n == -1) {
            break;
        } else {
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - 1; j++) {
                    if (a[j] > a[j + 1]) {
                        swap(a[j], a[j + 1]);
                    }
                }
            }
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
    }
    return 0;
}
