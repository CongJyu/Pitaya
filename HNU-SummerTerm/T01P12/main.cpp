// t01p12

#include <iostream>
#include <string>

using namespace std;

int main() {
    int t = 0, m = 0;
    cin >> t >> m;
    int *memory = new int[m];
    for (int i = 0; i < t; ++i) {
        string cmd;
        cin >> cmd;
        if (cmd == "alloc") {
            int x = 0;
            cin >> x;
            if (x > m) {
                cout << "NULL" << endl;
            }
            for (int j = 0; j < m; ++j) {
                
            }
        } else if (cmd == "erase") {
            // code
        } else if (cmd == "defragment") {
            // code
        }
    }
    delete[] memory;
    return 0;
}
