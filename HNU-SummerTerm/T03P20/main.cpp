// t03p20

#include <iostream>
#include <string>

using namespace std;

/*
 * 设想建立一个大小是 n ^ 2 的数组，表示所有的座位。
 * 表示占座位的操作：往座位里面存上占座人的 ID 号码。
 * 放弃占座操作：把所有该占座人的 ID 号码的座位全部清空。
 * 判断有效还是无效：占座前先扫一遍座位，如果有相同 ID 的没释放，无效；
 * 释放前先扫一遍座位，如果没有相同 ID 的座位没释放，无效；
 * 占座时如果连续的座位没了，无效。
 */

int main() {
    int n = 0, m = 0;  // n 个座位，m 个人
    while (cin >> n >> m) {
        int *seat = new int[n * n];  // 座位
        int k = 0;  // k 个命令
        cin >> k;
        string opt;  // 命令
        int id = 0, num = 0;  // 座位号和座位个数
        while (k--) {
            cin >> opt;  // 输入命令
            cin.get();  // 吸收空白
            if (opt == "in") {
                // 占座
                cin >> id >> num;
                // 有没有占了没释放的座位
                bool able_to_occupy = true;
                for (int i = 0; i < n * n; ++i) {
                    if (seat[i] == id) {
                        able_to_occupy = false;
                        break;
                    }
                }
                // 有连续 num 个座位吗
                // 这里还有一些问题
                bool is_continuous = true;
                for (int i = 0; i < n * n; ++i) {
                    if (seat[i] == 0) {
                        for (int j = i; j < num; ++j) {
                            if (seat[j] != 0) {
                                is_continuous = false;
                            }
                        }
                    }
                }
                // 最后输出是否有效命令
                if (able_to_occupy && is_continuous) {
                    cout << "yes" << endl;  // 可以占座，占 num 个连续的座位
                    for (int i = 0; i < n * n; ++i) {
                        for (int j = 0; j < num; ++j) {
                            seat[j] = id;
                        }
                    }
                } else {
                    cout << "no" << endl;  // 不能占座，什么也不做
                }
            } else {
                // 释放
                cin >> id;
                // 是不是还有座位没释放
                bool not_released = false;
                for (int i = 0; i < n * n; ++i) {
                    if (seat[i] == id) {
                        not_released = true;  // 可以执行释放操作
                        break;
                    }
                }
                // 判断是不是可以释放座位然后输出
                if (not_released) {
                    cout << "yes" << endl;  // 可以释放座位
                    for (int i = 0; i < n * n; ++i) {
                        if (seat[i] == id) {
                            seat[i] = 0;  // 释放
                        }
                    }
                } else {
                    cout << "no" << endl;  // 已经释放完了，不能执行 out 操作
                }
            }
        }
        // cout << "测试输入完成" << endl;
    }
    return 0;
}
