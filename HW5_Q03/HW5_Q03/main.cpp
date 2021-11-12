//
//  main.cpp
//  HW5_Q03 珠心算测验
//
//  Created by cyrain on 2021/10/25.
//

//#include <iostream>
//int main() {
//    using namespace std;
//    int n = 0;
//    cin >> n;
//    int arr[100] = {0};
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    int counter = 0;
//    for (int j = 0; j < n; j++) {
//        for (int k = j + 1; k < n; k++) {
//            for (int l = 0; l < n; l++) {
//                if (arr[j] + arr[k] == arr[l] && j != k) {
//                    counter++;
//                } else {
//                    continue;
//                }
//            }
//        }
//    }
//    cout << counter << endl;
//    return 0;
//}
#include <iostream>
//#include <cstdio>
int main() {
    using namespace std;
    int n, temp[1000], num = 0;
//    scanf("%d",&n);
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> temp[i];
    }
    for (int i = 0; i < n; i++) {
        int index =0;
        for (int j = 0; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (temp[i] == temp[j] + temp[k]) {
                    num++;
                    index = 1;
                    break;
                }
            }
            if (index == 1)
                break;
        }
    }
    cout << num << endl;
    return 0;
}
