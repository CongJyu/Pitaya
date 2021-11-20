//
//  main.cpp
//  Open-08 按指定顺序排序单词
//
//  Created by Rain Chen on 2021/11/20.
//  Something wrong

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
class Solution {
private:
    vector<string> split(string& str) {
        vector<string> vec;
        char* cstr = new char[str.length() + 1];
        strcpy(cstr, str.c_str());
        char* p = strtok(cstr, " ");
        while (p != 0) {
            vec.push_back(p);
            p = strtok(NULL, " ");
        }
        delete[] cstr;
        return vec;
    }
public:
    string sortSentence(string str) {
        vector<string> vec = split(str);
        unordered_map<int, string> mmap;
        for (auto& it : vec) {
            string ss = it;
            int key = atoi(ss.substr(ss.size() - 1).c_str());
            string value = ss.substr(0, ss.size() - 1);
            mmap.insert(pair<int, string>(key, value));
        }
        string ans = "";
        for (size_t i = 0; i < vec.size(); i++) {
            ans += mmap.at(i + 1) + " ";
        }
        ans = ans.substr(0, ans.size() - 1);
        return ans;
    }
};
int main() {
    string str;
    cin >> str;
    Solution s;
    cout << s.sortSentence(str) << endl;
    return 0;
}
