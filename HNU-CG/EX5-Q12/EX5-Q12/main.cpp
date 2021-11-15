//
//  main.cpp
//  EX5-Q12 小女孩与楼梯
//
//  Created by cyrain on 2021/10/31.
//

//#include <iostream>
//int main() {
//    using namespace std;
//    int t = 0;
//    cin >> t;
//    int a[101] = {0};
//    for (int i = 0; i < t; i++) {
//        cin >> a[i];
//    }
//    int counter = 0;    //  count the number of stairs
//    int num[101] = {0};
//    int n = 0;
//    for (int i = 0; i < t; i++) {
//        if (a[i] == 1) {
//            counter++;
//        }
//    }
//    cout << counter << endl;
//    for (int i = 0; i < counter; i++) {
//        cout << num[i] << " ";
//    }
//    cout << endl;
//    return 0;
//}
#include <iostream>
int main() {
    using namespace std;
    int t = 0;
    cin >> t;
    const int sizeA = t;
    int a[sizeA];
    int num = 0;
    for (int i = 0; i < t; i++) {
        cin >> a[i];
        if ((a[i] - a[i - 1]) <= 0) {
            num++;
        }
    }
    num++;
    const int sizeB = num;
    int b[sizeB], l = 1;
    for (int x = 0; x < num - 1; x++) {
        for (int y = 1; y < t; y++) {
            if (y == 1) {
                y = l;
            }
            if ((a[y] - a[y - 1]) <= 0) {
                b[x] = a[y - 1];
                l = y + 1;
                break;
            }
        }
    }
    b[num - 1] = a[t - 1];
    cout << num << endl;
    for (int s = 0; s < num; s++) {
        cout << b[s] << " ";
    }
    return 0;
}
