//
//  main.cpp
//  Open-08 按指定顺序排序单词
//
//  Created by Rain Chen on 2021/11/20.
//  Something wrong

#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    string sortSentence(string s) {
        vector<string> words(10);
        for (int i = 0; i < s.size(); ) {
            int j = i;
            while (((j < s.size() && (s[j] < '1')) || s[j] > '9')) {
                ++j;
            }
            int index = s[j] - '0';
            words[index] = s.substr(i, j - i);
            i = j + 2;
        }
        string res;
        for (int i = 1; i <= 9; ++i) {
            res += words[i];
            if ((i == 9) || (words[i + 1].empty())) {
                break;
            }
            res += ' ';
        }
        return res;
    }
};
int main() {
    string sentence;
    getline(cin, sentence);
    Solution a;
    cout << a.sortSentence(sentence) << endl;
    return 0;
}
