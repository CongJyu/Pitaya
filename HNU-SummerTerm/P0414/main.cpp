// p0414

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    vector<string> birthday[13][32];
    int month{}, day{};
    while (n--) {
        string id_number;
        cin >> id_number;
        cin.get();
        cin >> month >> day;
        birthday[month][day].push_back(id_number);
    }
    for (int i{}; i < 13; ++i) {
        for (int j{}; j < 32; ++j) {
            if (!birthday[i][j].empty()) {
                cout << i << " " << j << " ";
                for (auto &k: birthday[i][j]) {
                    cout << k << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}
