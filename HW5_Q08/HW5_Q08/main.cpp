//
//  main.cpp
//  HW5_Q08 校门外的树
//
//  Created by cyrain on 2021/10/26.
//

//#include <iostream>
//int main() {
//    using namespace std;
//    int l = 0, m = 0;
//    cin >> l >> m;
//    int startmin = 10000, endmax = 0;
//    int start = 0, end = 0;
//    int decrease = 0, remain = 0;
//    for (int i = 0; i < m; i++) {
//        cin >> start >> end;
//        if (start < startmin) {
//            startmin = start;
//        } else {
//            startmin = startmin;
//        }
//        if (end > endmax) {
//            endmax = end;
//        } else {
//            endmax = endmax;
//        }
//    }
//    decrease = endmax - startmin + 1;
//    remain = l + 1 - decrease;
//    cout << remain << endl;
//    return 0;
//}
#include<iostream>
using namespace std;
int main() {
    int L, M, i, j;
    int section[10001] = {0};
    int a, b, tree_sum = 0, tree_ex, tree_new;
    cin >> L>> M;
    for (i = 0; i < M; i++) {
        cin >> a >> b;
        for (j = a; j <= b; j++)
            section[j] = 1;
    }
    for (i = 0; i <= L; i++) {
        if(section[i]==1) {
            tree_sum++;
        }
    }
    tree_ex = L + 1;
    tree_new = tree_ex - tree_sum;
    cout << tree_new << endl;
    return 0;
}
