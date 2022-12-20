// P_402 成绩输出
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n = 0;
    while (cin >> n) {
        auto* score = new double [n];
        for (int i = 0; i < n; ++i) {
            cin >> score[i];
        }
        // 找到最大值，用一个变量存储当前找到到最大值
        double s_max = 0, s_min = 102;
        for (int i = 0; i < n; ++i) {
            if (score[i] > s_max) {
                s_max = score[i];
            }
            if (score[i] < s_min) {
                s_min = score[i];
            }
        }
        double sum = 0;
        // 求所有分数和
        for (int i = 0; i < n; ++i) {
            sum += score[i];
        }
        double average = sum / n;
        cout << fixed << setprecision(2);
        cout << s_max << " " << s_min << " " << average << endl;
    }
    return 0;
}
