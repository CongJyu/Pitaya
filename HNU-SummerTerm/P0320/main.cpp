// p0320

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{}, m{};
    while (cin >> n >> m) {
        int *seat{new int[n * n]};
        for (int i{}; i < n * n; ++i) {
            seat[i] = 0;
        }
        // 当前座位情况
        clog << "当前座位情况" << endl;
        for (int i{}; i < n * n; ++i) {
            clog << seat[i] << " ";
        }
        clog << endl;
        int k{};
        cin >> k;  // k 个命令
        while (k--) {
            string opt;
            cin >> opt;  // in 或者 out
            cin.get();
            if (opt == "in") {
                // 占座位
                int id{}, num{};
                cin >> id >> num;
                bool success{false};
                bool already{false};
                for (int i{}; i < n * n; ++i) {
                    if (seat[i] == id) {
                        // 之前占过位置
                        already = true;
                    }
                }
                if (!already) {
                    for (int i{}; i < n * n; ++i) {
                        bool able{true};
                        if (seat[i] == 0) {
                            // 座位是空的
                            for (int j{}; j < num; ++j) {
                                if (i + num <= n * n) {
                                    // 没到底，继续看
                                    if (seat[i + j] != 0) {
                                        able = false;
                                        break;
                                    }
                                } else {
                                    // 到底了
                                    able = false;
                                }
                            }
                        } else {
                            // 座位被占了
                            continue;
                        }
                        if (able) {
                            // 可以占座
                            for (int j{}; j < num; ++j) {
                                seat[i + j] = id;
                            }
                            success = true;
                            break;
                        } else {
                            // 不行，下一个
                            continue;
                        }
                    }
                }
                if (success) {
                    cout << "yes" << endl;
                } else {
                    cout << "no" << endl;
                }
                // 显示座位情况
                clog << "座位情况" << endl;
                for (int i{}; i < n * n; ++i) {
                    clog << seat[i] << " ";
                }
                clog << endl;
            } else {
                // 释放座位
                int id{};
                cin >> id;
                bool already{false};
                for (int i{}; i < n * n; ++i) {
                    if (seat[i] == id) {
                        already = true;
                    }
                }
                if (already) {
                    // 有占位置，可以释放
                    for (int i{}; i < n * n; ++i) {
                        if (seat[i] == id) {
                            seat[i] = 0;
                        }
                    }
                    cout << "yes" << endl;
                } else {
                    // 没占位置
                    cout << "no" << endl;
                }
            }
        }
        delete[] seat;
    }
    return 0;
}
