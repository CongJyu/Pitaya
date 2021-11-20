//
//  main.cpp
//  Open-05 最后的结余
//
//  Created by cyrain on 2021/11/17.
//

#include <iostream>
using namespace std;
int main() {
    int n = 0, k = 0, io = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> io;
        k += io;
    }
    cout << k << endl;
    return 0;
}
