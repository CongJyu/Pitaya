// p0110

#include <iostream>
#include <string>

using namespace std;

string to_bin(int x) {
    string result;
    while (x != 0) {
        if (x % 2 == 0) {
            result += "0";
        } else {
            result += "1";
        }
        x /= 2;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    while (n--) {
        int ip1{}, ip2{}, ip3{}, ip4{};
        char dot;
        cin >> ip1 >> dot >> ip2 >> dot >> ip3 >> dot >> ip4;
        string res{to_bin(ip1) + to_bin(ip2) + to_bin(ip3) + to_bin(ip4)};
        int cnt{};
        for (int i{}; i < (int) res.length(); ++i) {
            if (res[i] == '1') {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
