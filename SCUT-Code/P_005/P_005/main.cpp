//
//  main.cpp
//  P_005 五点共圆
//
//  Created by Rain Chen on 2022/2/11.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double pi = 3.141592653;

int main() {
    int n = 0, r = 0;
    while (true) {
        cin >> n >> r;
        int * angle = new int [n];
        for (int i = 0; i < n - 1; i++) {
            cin >> angle[i];
        }
        int sum = 0;
        for (int i = 0; i < n - 1; i++) {
            sum += angle[i];
        }
        angle[n - 1] = 360 - sum;
        double s = 0;
        for (int i = 0; i < n; i++) {
            s += 0.5 * r * r * sin((pi / 180) * angle[i]);
        }
        cout << fixed << setprecision(2);
        cout << s << endl;
        delete [] angle;
    }
    return 0;
}
