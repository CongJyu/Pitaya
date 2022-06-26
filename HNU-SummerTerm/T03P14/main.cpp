// t03p14

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string item, explanation;
    vector<string> dictionary;  // 存储魔咒
    vector<string> exp;  // 存储解释
    while (true) {
        cin >> item;
        if (item == "@END@") {
            break;
        }
        dictionary.push_back(item);
        cin.get();
        getline(cin, explanation);
        exp.push_back(explanation);
    }
    int n = 0;
    cin >> n;
    while (n--) {
        string search;
        cin.get();
        getline(cin, search);
        cin.get();
        bool flag = false;
        if (search[0] == '[') {
            // 遍历魔咒
            for (int i = 0; i < (int) dictionary.size(); ++i) {
                if (dictionary.at(i).find(search) != string::npos) {
                    cout << exp.at(i) << endl;
                    flag = true;
                    break;
                }
            }
        } else {
            // 遍历解释
            for (int i = 0; i < (int) dictionary.size(); ++i) {
                if (exp.at(i).find(search) != string::npos) {
                    for (int j = 1; j < (int) dictionary.at(i).size() - 1; ++j) {
                        cout << dictionary.at(i)[j];
                    }
                    cout << endl;
                    flag = true;
                    break;
                }
            }
        }
        if (flag) {
            continue;
        } else {
            cout << "what?" << endl;
        }
    }
    return 0;
}
