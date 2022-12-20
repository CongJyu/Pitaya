// p0304

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int change{}, count{}, capacity{}, n{}, max_num{}, min_num{};
    cin >> n >> capacity;
    for (int i{}; i < n; ++i) {
        cin >> change;
        count += change;
        max_num = max(max_num, count);
        min_num = min(min_num, count);
    }
    if (min_num * (-1) > capacity or max_num > capacity) {
        cout << 0 << endl;
    } else {
        cout << capacity - max_num + 1 + min_num << endl;
    }
    return 0;
}
