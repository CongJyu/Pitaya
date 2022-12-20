// p0206

#include <iostream>
#include <algorithm>

using namespace std;

void add_cal(string a, string b) {
    string cal_a = std::move(a), cal_b = std::move(b);
    string result{};
    if (cal_a.length() > cal_b.length()) {
        result = cal_a;
    } else {
        result = cal_b;
    }
    reverse(cal_a.begin(), cal_a.end());
    reverse(cal_b.begin(), cal_b.end());
    reverse(result.begin(), result.end());
    for (int i{}; i < min((int) cal_a.length(), (int) cal_b.length()); ++i) {
        result[i] = (char) (cal_a[i] - 'a' + cal_b[i] - 'a' + 'a');
        while (result[i] > 'z') {
            result[i] -= 26;
            if (i + 1 == min((int) cal_a.length(), (int) cal_b.length())) {
                result += 'b';
            } else {
                result[i + 1]++;
            }
        }
    }
    reverse(result.begin(), result.end());
    cout << result << endl;
}

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    while (n--) {
        string x, y;
        cin >> x >> y;
        add_cal(x, y);
    }
    return 0;
}
