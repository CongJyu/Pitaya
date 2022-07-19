// t02p12

#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool similar(string long_str, string short_str) {
    int long_in = (int) long_str.length();
    int short_in = (int) short_str.length();
    string tmp;
    for (int i = 0; i < short_in; ++i) {
        if (long_str[i] != short_str[i]) {
            tmp = short_str.substr(0, i);
            tmp += long_str[i] + short_str.substr(i, short_in - i);
            if (tmp == long_str) {
                return true;
            }
        }
    }
    tmp = short_str + long_str[long_in - 1];
    if (tmp == long_str) {
        return true;
    } else {
        return false;
    }
}

int main() {
    vector<string> dictionary;
    vector<string>::iterator it;
    string word;
    string dic;
    bool flag;
    int sub;
    while (true) {
        cin >> dic;
        if (dic == "#") {
            break;
        }
        dictionary.push_back(dic);
    }
    while (true) {
        cin >> word;
        if (word == "#") {
            break;
        }
        flag = false;
        for (it = dictionary.begin(); it != dictionary.end(); it++) {
            dic = *it;
            if (dic == word) {
                cout << word << " is correct";
                flag = true;
            }
        }
        if (!flag) {
            cout << word << ":";
            for (it = dictionary.begin(); it != dictionary.end(); it++) {
                dic = *it;
                sub = dic.length() - word.length();
                if (sub == 0) {
                    for (int i = 0; i < (int) dic.length(); ++i) {
                        if (dic[i] != word[i]) {
                            string temp = word;
                            temp[i] = dic[i];
                            if (temp == dic) {
                                cout << " " << dic;
                            }
                            break;
                        }
                    }
                } else if (abs(sub) == 1) {
                    if (dic.length() < word.length()) {
                        if (similar(word, dic)) {
                            cout << " " << dic;
                        }
                    } else {
                        if (similar(dic, word)) {
                            cout << " " << dic;
                        }
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}
