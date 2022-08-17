// ccf-csp 201512-3

#include <iostream>

using namespace std;

char draw[101][101]{'.'};

int main() {
    ios::sync_with_stdio(false);
    int n{}, m{}, q{};
    cin >> n >> m >> q;
    while (q--) {
        int opt{};
        cin >> opt;
        if (opt == 0) {
            // 画线段啦
            int x1{}, y1{}, x2{}, y2{};
            cin >> x1 >> y1 >> x2 >> y2;
            if (y1 == y2) {
                // 横线
                for (int i{x1}; i <= x2; ++i) {
                    if (draw[i][y1] == '|') {
                        draw[i][y1] = '+';
                    } else {
                        draw[i][y1] = '-';
                    }
                }
            } else if (x1 == x2) {
                // 竖线
                for (int j{y1}; j <= y2; ++j) {
                    if (draw[x1][j] == '-') {
                        draw[x1][j] = '+';
                    } else {
                        draw[x1][j] = '|';
                    }
                }
            }
        } else {
            // 填充啦
            int x{}, y{};
            cin >> x >> y;
            char c{};
            cin >> c;
            int i{x}, j{y};
            while (true) {
                if (draw[i][j] == '|') {
                    i++;
                } else if (draw[i][j] == '-') {
                    j++;
                } else {
                    draw[i][j] = c;
                }
                if (i == n and j == m) {
                    break;
                }
            }
        }
    }
    // 输出
    for (int i{n - 1}; i >= 0; ++i) {
        for (int j{}; j < m; ++j) {
            cout << draw[i][j];
        }
        cout << endl;
    }
    return 0;
}
