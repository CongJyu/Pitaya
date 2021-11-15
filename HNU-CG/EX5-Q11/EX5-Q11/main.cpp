//
//  main.cpp
//  EX5-Q11 松雅的旅馆
//
//  Created by cyrain on 2021/10/31.
//

#include <iostream>
int main() {
    using namespace std;
    int n = 0, d = 0, num = 0;
    cin >> n >> d;
    int pos[101] = {0};    //  the position of the hotels
    for (int i = 0; i < n; i++) {
        cin >> pos[i];
    }
    for (int x = 1; x < n; x++) {
        if ((pos[x] - pos[x - 1]) == 2 * d) {
            num++;
        } else if ((pos[x] - pos[x - 1] > 2 * d)) {
            num += 2;
        }
    }
    num += 2;
    cout << num << endl;
    return 0;
}

