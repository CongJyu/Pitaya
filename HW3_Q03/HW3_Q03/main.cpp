//
//  main.cpp
//  HW3_Q03 敲7
//
//  Created by cyrain on 2021/10/14.
//

#include <iostream>
int main() {
    using namespace std;
    int n = 0;
    cin >> n;
    for (int i = 1; i < n; ++i) {
        if (i % 7 == 0) {
            cout << i << endl;
        } else {
            int j = i;
            while (i > 0) {
                if (j % 10 == 7) {
                    cout << i << endl;
                    break;
                }
                j = j / 10;
                if (j == 0) {
                    break;
                }
            }
        }
    }
    return 0;
}
