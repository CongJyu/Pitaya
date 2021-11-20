//
//  main.cpp
//  EX3-Q12
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
int main() {
    using namespace std;
    int n = 0, score = 0, red_num = 0;
    char ball;
    cin >> n;
//  r1, y2, g3, c4, b5, p6, B7,
    for (int i = 0; i < n; ++i) {
        cin >> ball;
        if (ball == 'r') {
            cin >> red_num;
            score = score + red_num * 1;
        } else if (ball == 'y') {
            score += 2;
        } else if (ball == 'g') {
            score += 3;
        } else if (ball == 'c') {
            score += 4;
        } else if (ball == 'b') {
            score += 5;
        } else if (ball == 'p') {
            score += 6;
        } else if (ball == 'B') {
            score += 7;
        }
    }
    cout << score << endl;
    return 0;
}
