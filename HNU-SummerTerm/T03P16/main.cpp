// t03p16
// something wrong

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(double a, double b) {
    if (a != b) {
        return a > b;
    } else {
        return b > a;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(2);
    // 发票
    double q = 0;  // 给定报销额度
    int n = 0;  // 发票张数
    while (cin >> q >> n) {
        if (n == 0) {
            break;
        }
        int m = 0;  // 发票上物品件数
        double max_check = 0;
        vector<double> storage;
        while (n--) {
            cin >> m;
            double total_check = 0;
            for (int i = 0; i < m; ++i) {
                char type, colon;  // 物品种类，冒号
                double price;  // 物品价格
                cin >> type >> colon >> price;
                cin.get();  // 吸收一个空字符串
                if (type == 'A' || type == 'B' || type == 'C') {
                    if (price <= 600) {
                        total_check += price;
                    } else {
                        total_check = 0;
                    }  // 如果单个物品金额大于 600 就不考虑这个发票
                }
            }
            if (total_check <= 1000) {
                storage.push_back(total_check);
            }  // 推进向量存储起来
        }
        sort(storage.begin(), storage.end(), cmp);  // 按每个发票金额从大到小排序
        for (double i : storage) {
            if (i <= q && max_check + i <= q) {
                max_check += i;
            }
        }  // 在超过报销额度之前贪心
        cout << max_check << endl;
    }
    return 0;
}
