// p0108

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string num, judge;
    cin >> num;
    judge = num + num;
    int length{(int) num.length()};
    bool flag{true};
    string com{num};
    string::size_type found;
    for (int i{2}; i <= length; ++i) {
        int temp{};
        for (int j = length - 1; j >= 0; --j) {
            temp = (num[j] - '0') * i + temp;
            com[j] = (char) (temp % 10 + '0');
            temp /= 10;
        }
        found = judge.find(com);
        if (found == string::npos) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
