// t02p14

#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    while (cin >> n && n != 0) {
        unordered_map<string, int> counter;
        for (int i = 0; i < 2 * n - 1; ++i) {
            string name;
            cin >> name;
            if (name == "0") {
                break;
            }
            counter[name]++;
        }
        for (const auto &it: counter) {
            if (it.second % 2 == 1) {
                cout << it.first << endl;
            }
        }
    }
    return 0;
}
