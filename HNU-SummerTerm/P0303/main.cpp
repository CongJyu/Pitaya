// p0303

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string a;
    int b;
    cin >> a >> b;
    int part{};
    vector<int> result;
    bool flag{false};
    for (int i{}; i < (int) a.length() - 1; ++i) {
        if (part != 0) {
            part *= 10;
            part += (a[i] - '0');
            result.push_back(part / b);
            part %= b;
        } else {
            if (a[i] - '0' < b) {
                if (i != 0) {
                    result.push_back(0);
                }
                part = (a[i] - '0') * 10 + (a[i + 1] - '0');
                if (i == (int) a.length() - 2) {
                    flag = true;
                }
                result.push_back(part / b);
                part %= b;
                i++;
            } else {
                part = (a[i] - '0');
                result.push_back(part / b);
                part %= b;
            }
        }
    }
    if (!flag) {
        if (part != 0) {
            part *= 10;
            part += (a[(int) a.length() - 1] - '0');
            result.push_back(part / b);
            part %= b;
        } else {
            part += (a[(int) a.length() - 1] - '0');
            result.push_back(part / b);
            part %= b;
        }
    }
    for (int i{}; i < (int) result.size(); ++i) {
        cout << result.at(i);
    }
    cout << " " << part << endl;
    return 0;
}
