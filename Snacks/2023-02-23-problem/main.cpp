// 2023-02-23 problem

#include <iostream>

using namespace std;

int citizens[10001];
int stations[10001];
int trains[10001];

int main() {
    ios::sync_with_stdio(false);
    int a{}, b{}, c{};  // 火車總數、人員總數、指令條數
    cin >> a >> b >> c;
    for (int i{}; i < c; ++i) {
        // 輸入指令
        int event_number{};
        cin >> event_number;
        if (event_number == 1) {
            // 編號為 r 嘅火車運輸旅客 s ～ t，如果 u 係 1 嘅話從首都火車站出發，如果 u 係 0 嘅話從外地進入首都
            int r{}, s{}, t{}, u{};
            cin >> r >> s >> t >> u;
            // 未完成
        }
    }
    return 0;
}
