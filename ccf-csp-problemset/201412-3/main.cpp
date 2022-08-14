// ccf-csp 201412-3

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Record {
    string opt;
    double p{};
    double s{};
};

int main() {
    ios::sync_with_stdio(false);
    string order;
    while (cin >> order) {
        if (order == "buy") {
            // 购买股票
        } else if (order == "sell") {
            // 出售股票
        } else if (order == "cancel") {
            // 撤销记录
        }
    }
    return 0;
}
