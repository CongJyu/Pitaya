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
        cin.get();
        getline(cin, explanation);
        dictionary.push_back(item);
        exp.push_back(explanation);
    }
    int n = 0;
    cin >> n;
    while (n--) {
        string search;
        getline(cin, search);
        if (search[0] == '[') {
            // 遍历魔咒
        } else {
            // 遍历解释
        }
    }
    return 0;
}
