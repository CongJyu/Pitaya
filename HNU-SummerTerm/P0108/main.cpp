// p0108
// runtime error

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string s_num;
    cin >> s_num;
    int n{(int) s_num.length()};
    long long num = stoll(s_num);
    s_num += s_num;
    bool flag{true};
    for (long long i{1}; i <= n; ++i) {
        long long test = num * i;
        string s_test = to_string(test);
        if (s_num.find(s_test) == string::npos) {
            flag = false;
        }
    }
    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
