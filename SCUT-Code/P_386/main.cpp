//  P_386 货币操作

#include <iostream>
using namespace std;

class RMB {
public:
    RMB() {}
    RMB(int x1, int x2, int x3) {
        yuan = x1;
        jiao = x2;
        fen = x3;
    }
private:
    int yuan;
    int jiao;
    int fen;
    bool mark;
};

int main() {
    int a1 = 0, a2 = 0, a3 = 0, b1 = 0, b2 = 0, b3 = 0;
    double c = 0.0;
    while (cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3) {
        RMB a = RMB(a1, a2, a3);
        RMB b = RMB(b1, b2, b3);
        //  cout << "a=" << RMB(a1, a2, a3) << "b=" << RMB(b1, b2, b3) << "c=" << RMB(c) << " "
        //  << "a+c=" << double(a + c) << " "
        //  << "a-b=" << double(a - b) << " "
        //  << "b*2=" << double(b * 2) << " "
        //  << "a * 0.5" << double(a * 0.5) << endl;
    }
    return 0;
}
