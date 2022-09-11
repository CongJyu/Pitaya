// ccf-csp 201512-3

#include <iostream>
#include <queue>

using namespace std;

struct Point {
    int x, y;

    Point(int xx, int yy) : x(xx), y(yy) {}
};

char pic[100][100]{0};
int dx[4]{0, 1, 0, -1};
int dy[4]{1, 0, -1, 0};

int main() {
    ios::sync_with_stdio(false);
    int m{}, n{}, q{}, op{}, x1{}, x2{}, y1{}, y2{};
    char ch;
    cin >> m >> n >> q;
    for (int i{}; i < m; ++i) {
        for (int j{}; j < n; ++j) {
            pic[i][j] = '.';
        }
    }
    for (int qi{}; qi < q; ++qi) {
        cin >> op;
        if (op == 0) {
            cin >> x1 >> y1 >> x2 >> y2;
            if (x1 == x2) {
                if (y1 > y2) {
                    swap(y1, y2);
                }
                for (int i{y1}; i <= y2; ++i) {
                    if (pic[x1][i] == '-') {
                        // '-' + '|' = '+'
                        pic[x1][i] = '+';
                        continue;
                    } else if (pic[x1][i] == '|' or pic[x1][i] == '+') {
                        // 已经存在
                        continue;
                    } else {
                        // 原地图无分隔
                        pic[x1][i] = '|';
                    }
                }
            } else {
                // x 轴方向划线
                if (x1 > x2) {
                    swap(x1, x2);
                }
                for (int i{x1}; i <= x2; ++i) {
                    if (pic[i][y1] == '|') {
                        // '|' + '-' = '+'
                        pic[i][y1] = '+';
                        continue;
                    } else if (pic[i][y1] == '-' or pic[i][y1] == '+') {
                        continue;
                    } else {
                        // 原地图无分隔符
                        pic[i][y1] = '-';
                    }
                }
            }
        } else if (op == 1) {
            if (x1 > x2) {
                swap(x1, x2);
            }
            
        }
    }
    return 0;
}
