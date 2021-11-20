//
//  main.cpp
//  HW4-Q03 蝉，蜻蜓，蜘蛛的数量
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
int main() {
    using namespace std;
    int n, x, y;
    cin >> n >> x >> y;
    int c = 0, q = 0, z = 0;
    int leg, wing;
    for (c = 0; c < 20; c++) {
        for (q = 0; q < 20; q++) {
            for (z = 0; z < 20; z++) {
                wing = 1 * c + 2 * q;
                if (wing != y) {
                    continue;
                } else {
                    leg = 6 * c + 6 * q + 8 * z;
                    if (leg == x && n == c + q + z)
                        cout << c << " " << q << " " << z << endl;
                }
            }
        }
    }
    return 0;
}
