//  P_383 统计血型的数目

#include <iostream>

using namespace std;

int main() {
    char type = '0';
    int a = 0, b = 0, o = 0, ab = 0;
    while (cin >> type) {
        if (type == 'X') {
            cout << "A:" << a << " B:" << b
            << " O:" << o << " AB:" << ab << endl;
            a = 0;
            b = 0;
            o = 0;
            ab = 0;
        } else {
            switch (type) {
                case 'A':
                    a++;
                    break;
                case 'B':
                    b++;
                    break;
                case 'O':
                    o++;
                    break;
                case 'C':
                    ab++;
                    break;
            }
        }
    }
    return 0;
}
