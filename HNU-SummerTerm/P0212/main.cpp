// p0212

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    vector<string> dic;
    while (true) {
        string word;
        cin >> word;
        if (word == "#") {
            break;
        }
        dic.push_back(word);
    }
    while (true) {
        string target;
        cin >> target;
        if (target == "#") {
            break;
        }
        cout << target;
        bool correct{false};
        for (int i{}; i < (int) dic.size(); ++i) {
            if (dic.at(i) == target) {
                correct = true;
                break;
            }
        }
        if (correct) {
            cout << " is correct" << endl;
        } else {
            // 更正单词
        }
    }
    return 0;
}
