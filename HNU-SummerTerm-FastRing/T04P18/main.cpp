// t04p18

#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int x, int y) {
    if (x != y) {
        return x > y;
    }
    return x < y;
}

int main() {
    ios::sync_with_stdio(false);
    int m = 0;  // 准备凑出的金额
    int k = 0;  // 币种数量
    while (true) {
        cin >> m;
        if (m == 0) {
            break;
        }
        cin >> k;
        int *cash = new int[k];
        for (int i = 0; i < k; ++i) {
            cin >> cash[i];  // 输入每一币种的面值
        }
        sort(cash, cash + k, cmp);  // 降序排序
        if (m < cash[k - 1]) {
            cout << "Impossible" << endl;
            continue;
        }
        int counter = 0;
        int j = 0;
        while (m != 0) {
            if (m >= cash[j]) {
                m -= cash[j];
                counter++;
            } else {
                j++;
            }
            if (j >= k) {
                break;
            }
        }
        delete[] cash;
        cout << counter << endl;
    }
    return 0;
}
