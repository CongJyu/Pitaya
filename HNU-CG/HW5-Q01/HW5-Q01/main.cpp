//
//  main.cpp
//  HW5-Q01 肿瘤面积
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
int main() {
    using namespace std;
    int n;
    int arr[1000][1000];
    int ax = 0, ay = 0, bx = 0, by = 0;
    cin >> n;
    bool first = true;
    for (int i = 1; i <=n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 0) {
                if (first) {
                    ax = i;
                    ay = j;
                    first = false;
                }
                bx = i;
                by = j;
            }
        }
    }
    if (bx > ax && by > ay) {
        cout << (by - ay - 1) * (bx - ax - 1) << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
