// p0301

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string a, b;
    char da, db;
    cin >> a >> da >> b >> db;
    string tran_a, tran_b;
    for (int i{}; i < (int) a.length(); ++i) {
        if (a[i] == da) {
            tran_a += da;
        }
    }
    for (int i{}; i < (int) b.length(); ++i) {
        if (b[i] == db) {
            tran_b += db;
        }
    }
    if (tran_a.empty()) {
        tran_a = "0";
    }
    if (tran_b.empty()) {
        tran_b = "0";
    }
    int result{stoi(tran_a) + stoi(tran_b)};
    cout << result << endl;
    return 0;
}
