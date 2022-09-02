// p0421

#include <iostream>

using namespace std;

/*
 * 红球 r 1 分
 * 黄球 y 2 分
 * 绿球 g 3 分
 * 咖啡球 c 4 分
 * 蓝球 b 5 分
 * 粉球 p 6 分
 * 黑球 B 7 分
 */

int get_score_for_ball(char ball) {
    if (ball == 'r') {
        return 1;
    } else if (ball == 'y') {
        return 2;
    } else if (ball == 'g') {
        return 3;
    } else if (ball == 'c') {
        return 4;
    } else if (ball == 'b') {
        return 5;
    } else if (ball == 'p') {
        return 6;
    } else if (ball == 'B') {
        return 7;
    } else {
        return 0;
    }
}

void solution() {
    char first_hit, first_in;
    while (true) {
        cin >> first_hit;
        if (first_hit == '-') {
            // 这组数据结束
            break;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    int t{};
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
