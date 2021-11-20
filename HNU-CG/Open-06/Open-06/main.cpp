//
//  main.cpp
//  Open-06 找不重复字符串的最大子串
//
//  Created by cyrain on 2021/11/17.
//

#include <iostream>
#include <cstring>
using namespace std;
int lengthOfLongestSubs(string s);
int main() {
    char s[1000];
    cin >> s;
    cout << lengthOfLongestSubs(s) << endl;
    return 0;
}
int lengthOfLongestSubs(string s) {
    int res = 0;
    int len = s.size();
    int freq[256] = {0};
    int l = 0, r = -1;
    while (l < len) {
        if (r + 1 < len && freq[s[r + 1]] == 0) {
            freq[s[++r]]++;
        } else {
            freq[s[l++]]--;
        }
        res = max(res, r - l + 1);
    }
    return res;
}
