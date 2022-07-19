// t03p04

#include <iostream>

using namespace std;

int main() {
    int change = 0, count = 0, capacity = 0, n = 0, max_num = 0, min_num = 0;
    cin >> n >> capacity;
    for (int i = 0; i < n; ++i) {
        cin >> change;
        count += change;
        max_num = max_num > count ? max_num : count;
        min_num = min_num < count ? min_num : count;
    }
    if (min_num * (-1) > capacity || max_num > capacity) {
        cout << 0 << endl;
        return 0;
    }
    cout << capacity - max_num + 1 + min_num << endl;
    return 0;
}
