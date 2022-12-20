//  P_382 计算周工资

#include <iostream>
using namespace std;

int main() {
    int time = 0, salary = 0;
    while (cin >> time) {
        if (time <= 40) {
            salary = time * 20;
        } else {
            salary = 40 * 20 + (time - 40) * 30;
        }
        cout << salary << endl;
    }
    return 0;
}
