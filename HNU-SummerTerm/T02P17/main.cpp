// t02p17

#include <iostream>

using namespace std;

struct Position {
    char type{};
    int direct{};
    int num_per{};
};

Position pos[200];

int main() {
    int n = 0, a = 0, b = 0, c = 0;
    int pos_yue, pos_le, point;
    while (cin >> n >> a >> b >> c) {
        // code
        for (int i = 0; i < n; ++i) {
            cin >> pos[i].type;
            if (pos[i].type == 'G') {
                cin >> pos[i].direct;
            } else {
                pos[i].direct = -1;
            }
            pos[i].num_per = 0;
        }
        pos[0].num_per = 2;
        pos_le = 0;
        pos_yue = 0;
        point = c;
        for (int i = 0;; ++i) {
            point = (a * point + b) % 6 + 1;
            if (i % 2 == 0) {
                pos[pos_le].num_per -= 1;
                pos_le += point;
                if (pos_le > n - 1) {
                    pos_le = n - 1 - (pos_le - (n - 1));
                }
                pos[pos_le].num_per += 1;
                while (pos[pos_le].type == 'G') {
                    pos[pos_le].num_per -= 1;
                    pos_le = pos[pos_le].direct;
                    pos[pos_le].num_per += 1;
                }
                if (pos[pos_le].num_per > 1 && pos_le != 0) {
                    pos[pos_le].num_per = 1;
                    pos_yue = 0;
                }
            } else {
                pos[pos_yue].num_per -= 1;
                pos_yue += point;
                if (pos_yue > n - 1) {
                    pos_yue = n - 1 - (pos_yue - (n - 1));
                }
                pos[pos_yue].num_per += 1;
                while (pos[pos_yue].type == 'G') {
                    pos[pos_yue].num_per -= 1;
                    pos_yue = pos[pos_yue].direct;
                    pos[pos_yue].num_per += 1;
                }
                if (pos[pos_yue].num_per > 1 && pos_yue != 0) {
                    pos[pos_yue].num_per = 1;
                    pos_le = 0;
                }
            }
            if (pos_le == n - 1) {
                cout << "Lele" << endl;
                break;
            }
            if (pos_yue == n - 1) {
                cout << "Yueyue" << endl;
                break;
            }
        }
    }
    return 0;
}
