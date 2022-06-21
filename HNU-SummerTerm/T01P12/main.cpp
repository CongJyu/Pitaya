// t01p12

#include <iostream>
#include <string>

using namespace std;

void alloc_op(int m_size, int *mem) {
    int x = 0;
    cin >> x;
    if (x > m_size) {
        cout << "NULL" << endl;
    } else {
        for (int i = 0; i < x; ++i) {
            mem[i] = 1;
        }
    }
}

int main() {
    int t = 0, m = 0;
    cin >> t >> m;
    int *mem = new int[m];
    string c_operation;
    cin >> c_operation;
    if (c_operation == "alloc") {
        alloc_op(m, mem);
    }
    return 0;
}
