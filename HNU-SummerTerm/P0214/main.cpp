// p0214

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    while (cin >> n) {
        if (n == 0) {
            break;
        }
        vector<string> ls;
        for (int i{}; i < 2 * n - 1; ++i) {
            string name;
            cin >> name;
            if (name == "0") {
                break;
            }
            if (!ls.empty()) {
                bool found{false};
                for (int j{}; j < (int) ls.size(); ++j) {
                    if (ls.at(j) == name) {
                        found = true;
                        ls.at(j).erase();
                    }
                }
                if (!found) {
                    ls.push_back(name);
                }
            } else {
                ls.push_back(name);
            }
        }
        for (int i{}; i < n; ++i) {
            if (!ls.at(i).empty()) {
                cout << ls.at(i) << endl;
            }
        }
    }
    return 0;
}
