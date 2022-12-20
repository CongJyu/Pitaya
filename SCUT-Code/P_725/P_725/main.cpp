//
//  main.cpp
//  P_725 Copy Dance对决！
//
//  Created by Rain Chen on 2021/12/28.
//

#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    int v;
    long long diana = 0;
    long long bella = 0;
    long long carol = 0;
    for (long long i = 0; i < n; i++) {
        cin >> v;
        if (v == 1) {
            diana++;
        } else if (v == 2) {
            bella++;
        } else if (v == 3) {
            carol++;
        }
    }
    if (diana > bella) {
        cout << "Diana" << endl;
    } else if (diana < bella) {
        cout << "Bella" << endl;
    } else {
        cout << "Carol" << endl;
    }
    return 0;
}
