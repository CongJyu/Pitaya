//
//  main.cpp
//  HW5-Q06 主要元素
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
#include <algorithm>
int main() {
    using namespace std;
    int n = 0;
    cin >> n;
    int a[100];
    int cnt = 1, max = 0, num = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        if (a[i + 1] - a[i] == 0) {
            cnt++;
            if (cnt >= max) {
                max = cnt;
                num = a[i];
            } else {
                max = max;
            }
        } else {
            cnt = 1;
        }
    }
    if (max > n / 2.0) {
        cout << num << endl;
    } else {
        cout << "null" << endl;
    }
    return 0;
}
//#include <iostream>
//int main() {
//    using namespace std;
//    int n = 0;
//    cin >> n;
//    int arr[100];
//    int counter = 0, max = 0;
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    for (int i = 0; i < n; i++) {
//        for (int j = i; j < n; j++) {
//            if (arr[i] - arr[j] < 0) {
//                counter++;
//            }
//            if (counter >= max) {
//                max = counter;
//            }
//        }
//    }
//    if (max == 1) {
//        cout << "null" << endl;
//    } else {
//        cout << max << endl;
//    }
//    return 0;
//}
