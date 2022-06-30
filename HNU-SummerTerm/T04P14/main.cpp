// t04p14

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 0;  // 有 n 个学生
    cin >> n;
    vector<string> birthday[13][32];  // 创建对应的 vector 用来存储对应日期的学号
    int month = 0, day = 0;  // 生日
    while (n--) {
        string id_number;  // 学号
        cin >> id_number;
        cin.get();
        cin >> month >> day;
        birthday[month][day].push_back(id_number);  // 把对应的学号推入对应的生日中
    }
    for (int i = 0; i < 13; ++i) {
        for (int j = 0; j < 32; ++j) {
            if (!birthday[i][j].empty()) {
                cout << i << " " << j << " ";
                for (auto &k: birthday[i][j]) {
                    cout << k << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}
