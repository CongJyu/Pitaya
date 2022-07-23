// p0208

#include <iostream>

using namespace std;

int dir_x[4] = {0, 1, 0, -1};
int dir_y[4] = {1, 0, -1, 0};

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int x{(n - 1) / 2}, y{(n - 1) / 2};
    int **m{new int *[n]};
    for (int i{}; i < n; ++i) {
        m[i] = new int[n];
    }
    int direction{}, step{1}, step_cnt{};
    int i{1};
    m[x][y] = 1;
    while (i < n * n) {
        for (int j{1}; j <= step; ++j) {
            i++;
            m[x + j * dir_x[direction]][y + j * dir_y[direction]] = i;
            if (i == n * n) {
                break;
            }
        }
        x += step * dir_x[direction];
        y += step * dir_y[direction];
        step_cnt++;
        if (step_cnt == 2) {
            step_cnt = 0;
            step++;
        }
        direction++;
        if (direction == 4) {
            direction = 0;
        }
    }
    for (int j{}; j < n; ++j) {
        for (int k{}; k < n; ++k) {
            cout << m[j][k] << " ";
        }
        cout << endl;
    }
    return 0;
}
