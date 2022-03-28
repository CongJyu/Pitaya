//  P_381 统计血型的数目

#include <iostream>

using namespace std;

int main() {
    char type = '0';
    int a = 0, b = 0, ab = 0, o = 0;
    while (cin >> type) {
        if (type == 'X') {
            break;
        } else {
            switch (type) {
                case 'A':
                    a++;
                    break;
                case 'B':
                    b++;
                    break;
                case 'C':
                    ab++;
                    break;
                case 'O':
                    o++;
                    break;
                default:
                    break;
            }
        }
    }
    cout << "A:" << a << " B:" << b << " O:" << o << " AB:" << ab << endl;
    return 0;
}
