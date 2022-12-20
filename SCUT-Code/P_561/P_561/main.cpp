//
//  main.cpp
//  P_561 Tutorial 3.5 Return indices
//
//  Created by Rain Chen on 2022/1/8.
//

#include <iostream>
using namespace std;

int main() {
    int n, target;
    while (true) {
        cin >> n;
        if (n == -1) {
            break;
        }
        cin >> target;
        int * arr = new int [n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int mark1 = 0;
        int mark2 = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] + arr[j] == target) {
                    mark1 = i;
                    mark2 = j;
                }
            }
        }
        cout << mark1 << " " << mark2 << endl;
    }
    return 0;
}
