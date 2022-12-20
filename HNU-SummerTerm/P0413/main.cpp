// p0413

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int m1{}, m2{}, r1{}, r2{}, r3{};
    string opt;
    while (cin >> m1 >> m2) {
        cin >> opt;
        for (int i{}; i < (int) opt.length(); ++i) {
            switch (opt[i]) {
                case 'A':
                    r1 = m1;
                    break;
                case 'B':
                    r2 = m2;
                    break;
                case 'C':
                    m1 = r3;
                    break;
                case 'D':
                    m2 = r3;
                    break;
                case 'E':
                    r3 = r1 + r2;
                    break;
                case 'F':
                    r3 = r1 - r2;
                    break;
                default:
                    break;
            }
        }
        cout << m1 << "," << m2 << endl;
    }
    return 0;
}
