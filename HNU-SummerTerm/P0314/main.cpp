// p0314

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    vector<string> dic;  // 存储魔咒和解释
    while (true) {
        string input;
        getline(cin, input);
        if (input == "@END@") {
            break;
        }
        dic.push_back(input);
    }
    int n{};
    cin >> n;  // 输入询问次数
    cin.get();  // 吸收回车
    while (n--) {
        string query;
        getline(cin, query);
        if (query[0] == '[') {
            // 是一个魔咒，输出对应解释
            bool found{false};  // 标记是否找到
            for (int i{}; i < (int) dic.size(); ++i) {
                if (dic.at(i).find(query) != string::npos) {
                    // 找到了，从魔咒结束的空格后面开始输出解释
                    found = true;
                    int spell_length{(int) query.length() + 1};
                    for (int j{spell_length}; j < (int) dic.at(i).length(); ++j) {
                        cout << dic.at(i)[j];
                    }
                    cout << endl;
                    break;
                }
            }
            if (!found) {
                // 没有找到，输出 what
                cout << "what?" << endl;
            }
        } else {
            // 是一个解释，输出对应魔咒
            bool found{false};
            for (int i{}; i < (int) dic.size(); ++i) {
                if (dic.at(i).find(query) != string::npos) {
                    // 找到解释了，输出中括号里面魔咒的内容
                    found = true;
                    for (int j{1};; ++j) {
                        if (dic.at(i)[j] == ']') {
                            break;
                        }
                        cout << dic.at(i)[j];
                    }
                    cout << endl;
                    break;
                }
            }
            if (!found) {
                // 没有找到，输出 what
                cout << "what?" << endl;
            }
        }
    }
    return 0;
}
