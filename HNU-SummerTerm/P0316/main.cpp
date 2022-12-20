// p0316

#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

vector<double> v;

double dp(int n, double max_i) {
    if (n == 0) {
        return 0;
    }
    if (max_i >= v[n - 1]) {
        return max(v[n - 1] + dp(n - 1, max_i - v[n - 1]), dp(n - 1, max_i));
    } else if (max_i < v[n - 1]) {
        return dp(n - 1, max_i);
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    double max_i{};
    int n{};
    while (cin >> max_i >> n) {
        if (n == 0) {
            break;
        }
        while (n--) {
            int num{};
            cin >> num;
            double sum{};
            int flag{1};
            while (num--) {
                string temp;
                cin >> temp;
                char type{temp[0]};
                string price{temp.substr(2, temp.size() - 2)};
                if (type != 'A' and type != 'B' and type != 'C') {
                    flag = 0;
                    break;
                }
                stringstream ss;
                ss << price;
                double pri{};
                ss >> pri;

                if (pri > 600) {
                    flag = 0;
                    break;
                }
                sum += pri;
            }
            if (sum <= 1000 and flag and sum <= max_i) {
                v.push_back(sum);
            }
        }
        double res{dp((int) v.size(), max_i)};
        if ((int) v.size() == 0) {
            res = 0;
        }
        cout << fixed << setprecision(2) << res << endl;
        v.clear();
    }
    return 0;
}
