// t04p13

#include <iostream>

using namespace std;

/*
 * command A: 将内存 M1 的数据装到寄存器 R1 中
 * command B: 将内存 M2 的数据装到寄存器 R2 中
 * command C: 将寄存器 R3 的数据装到内存 M1 中
 * command D: 将寄存器 R3 的数据装到内存 M2 中
 * command E: 将寄存器 R1 中的数据和寄存器 R2 中的数据相加，结果放到寄存器 R3 中
 * command F: 将寄存器 R1 中的数据和寄存器 R2 中的数据相减，结果放到寄存器 R3 中
 */

int main() {
    ios::sync_with_stdio(false);
    int m1 = 0, m2 = 0;
    int r1 = 0, r2 = 0, r3 = 0;
    while (cin >> m1 >> m2) {
        string command;
        cin >> command;
        for (char i: command) {
            switch (i) {
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
