// t03p16
// something wrong

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(2);
    // 发票
    int q = 0;  // 给定报销额度
    int n = 0;  // 发票张数
    while (cin >> q >> n) {
        if (n == 0) {
            break;
        }
        int m = 0;  // 发票上物品件数
        double max_check = 0;
        while (n--) {
            cin >> m;
            double total_check = 0;
            for (int i = 0; i < m; ++i) {
                char type, colon;  // 物品种类，冒号
                int price;  // 物品价格
                cin >> type >> colon >> price;
                if (type == 'A' || type == 'B' || type == 'C') {
                    if (price <= 600) {
                        total_check += price;
                    } else {
                        total_check = 0;
                    }
                }
            }
            if (total_check <= 1000) {
                max_check += total_check;
            }
        }
        cout << max_check << endl;
    }
    return 0;
}
