// ccf-csp 201403-3

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Option {
    char cmd;
    int append{};
};

int main() {
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    vector<Option> opt;
    for (int i{}; i < (int) s.length(); ++i) {
        if (i != (int) s.length() - 1 and s[i + 1] != ':') {
            // 无参数
            Option tmp{s[i], 0};
            opt.push_back(tmp);
        } else if (i == (int) s.length() - 1 and s[i] != ':') {
            // 无参数
            Option tmp{s[i], 0};
            opt.push_back(tmp);
        } else {
            // 有参数
            Option tmp{s[i], 1};
            opt.push_back(tmp);
        }
    }
    int n{};
    cin >> n;
    int case_num{};
    cin.get();
    while (n--) {
        // 预处理
        vector<string> out;
        // 输入处理
        case_num++;
        string input;
        getline(cin, input);
        for (int i{2}; i < (int) input.length(); ++i) {
            if (input[i] == '-') {
                // 处理命令
                bool found_command{false};
                for (int j{}; j < (int) opt.size(); ++j) {
                    if (opt.at(j).cmd == input[i + 1]) {
                        found_command = true;
                        if (opt.at(j).append == 1) {
                            // 有参数
                            int k{i + 3};
                            string append{};
                            while (true) {
                                if (input[k] == ' ' or k >= (int) input.length()) {
                                    break;
                                }
                                append += input[k];
                                k++;
                            }
                            clog << "APPEND = " << append << endl;
                            if (!out.empty()) {
                                // 检查是否有相同的命令
                                bool have_same{false};
                                int pos_same{};
                                for (int it{}; it < (int) out.size(); ++it) {
                                    if (out.at(it).find(input.substr(i, 2)) != string::npos) {
                                        clog << "==FIND==" << endl;
                                        clog << out.at(it) << endl;
                                        have_same = true;
                                        pos_same = i;
                                        break;
                                    }
                                }
                                if (have_same) {
                                    // 有相同的命令，参数替换成新的
                                    out.at(pos_same).clear();
                                    clog << "OUT.AT(POS_SAME) = " << out.at(pos_same) << endl;
                                    out.at(pos_same) = input.substr(i, 2) + " " + append;
                                } else {
                                    // 没有相同的命令，直接推入
                                    out.push_back(input.substr(i, 2) + " " + append);
                                }
                            } else {
                                // 空的，直接推入
                                out.push_back(input.substr(i, 2) + " " + append);
                            }
                        } else {
                            // 无参数，此部分已完成
                            if (!out.empty()) {
                                // 检查是否有相同的命令
                                bool have_same{false};
                                for (int it{}; it < (int) out.size(); ++it) {
                                    if (out.at(it).find(input.substr(i, 2)) != string::npos) {
                                        clog << "==FIND==" << endl;
                                        clog << out.at(it) << endl;
                                        have_same = true;
                                        break;
                                    }
                                }
                                if (!have_same) {
                                    out.push_back(input.substr(i, 2));
                                    // 输出动态数组
                                    clog << "==VECTOR OUT==" << endl;
                                    for (int test{}; test < (int) out.size(); ++test) {
                                        clog << out.at(test) << endl;
                                    }
                                }
                            } else {
                                out.push_back(input.substr(i, 2));
                            }
                        }
                    }
                }
            }
        }
        // 输出处理
        cout << "Case " << case_num << ": ";
        for (int i{}; i < (int) out.size(); ++i) {
            cout << out.at(i) << " ";
        }
        cout << endl;
    }
    return 0;
}
