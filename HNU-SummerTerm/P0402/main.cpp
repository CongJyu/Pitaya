// p0402

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int cnt_zero{}, input{};
    vector<int> list;
    while (cin >> input) {
        if (input == 0) {
            cnt_zero++;
            continue;
        }
        list.push_back(input);
    }
    sort(list.begin(), list.end());
    cout << list[0];
    for (int i{}; i < cnt_zero; ++i) {
        cout << 0;
    }
    for (int i{1}; i < (int) list.size(); ++i) {
        cout << list[i];
    }
    cout << endl;
    return 0;
}
