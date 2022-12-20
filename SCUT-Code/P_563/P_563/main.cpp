//
//  main.cpp
//  P_563 5.20 Pythagorean Triples
//
//  Created by Rain Chen on 2022/1/9.
//

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == -1) {
            break;
        }
        int cnt = 0;
        for (int a = 1; a <= n; a++) {
            for (int b = a; b <= n; b++) {
                for (int c = b; c <= n; c++) {
                    if (a * a + b * b == c * c) {
                        cnt++;
                        cout << a << " " << b << " " << c << endl;
                    }
                }
            }
        }
        cout << "A total of " << cnt << " triples were found." << endl;
    }
    return 0;
}
