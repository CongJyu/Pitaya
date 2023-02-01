// 2023-02-01 problem
// cpp standard 17

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int n{}, x{}, y{}, k{};
    cin >> n >> x >> y >> k;

    struct Mine {
        int number;
        int mx;
        int my;
    };
    Mine *mine_position{new Mine[n]}, nearest_mine{-1, -1, -1}, farthest_mine{-1, -1, -1};
    vector<int> avail_mine;

    for (int i{}; i < n; ++i) {
        mine_position[i].number = i + 1;
        cin >> mine_position[i].mx >> mine_position[i].my;

        if (pow(mine_position[i].mx - x, 2) + pow(mine_position[i].my - y, 2) <= pow(k, 2)) {
            avail_mine.push_back(mine_position[i].number);
            if (nearest_mine.mx >= 0 and nearest_mine.my >= 0
                and pow(mine_position[i].mx - x, 2) + pow(mine_position[i].my - y, 2)
                        < pow(nearest_mine.mx - x, 2) + pow(nearest_mine.my - y, 2)) {
                nearest_mine.mx = mine_position[i].mx;
                nearest_mine.my = mine_position[i].my;
                nearest_mine.number = mine_position[i].number;
            } else if (nearest_mine.mx < 0 and nearest_mine.my < 0) {
                nearest_mine.mx = mine_position[i].mx;
                nearest_mine.my = mine_position[i].my;
                nearest_mine.number = mine_position[i].number;
            }

            if (nearest_mine.mx >= 0 and nearest_mine.my >= 0
                and pow(mine_position[i].mx - x, 2) + pow(mine_position[i].my - y, 2)
                        >= pow(farthest_mine.mx - x, 2) + pow(farthest_mine.my - y, 2)) {
                farthest_mine.mx = mine_position[i].mx;
                farthest_mine.my = mine_position[i].my;
                farthest_mine.number = mine_position[i].number;
            } else if (farthest_mine.mx < 0 and farthest_mine.my < 0) {
                farthest_mine.mx = mine_position[i].mx;
                farthest_mine.my = mine_position[i].my;
                farthest_mine.number = mine_position[i].number;
            }
        }
    }

    if (avail_mine.empty()) {
        cout << -1 << endl;
    } else {
        for (int i{}; i < (int) avail_mine.size(); ++i) {
            cout << avail_mine[i] << " ";
        }
        cout << endl;
    }
    cout << nearest_mine.number << " " << farthest_mine.number << endl;

    delete[] mine_position;

    return 0;
}
