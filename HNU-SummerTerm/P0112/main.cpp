// p0112

#include <iostream>
#include <string>

using namespace std;

struct Memory {
    int index{};
    int val{};
    bool available{true};
};

int main() {
    ios::sync_with_stdio(false);
    int t{}, m{};
    cin >> t >> m;
    Memory *mem{new Memory[m]};
    while (t--) {
        string opt;
        cin >> opt;
        if (opt == "alloc") {
            // alloc
            int n{};
            cin >> n;
        } else if (opt == "erase") {
            // erase
        } else if (opt == "defragment") {
            // defragment
        }
    }
    return 0;
}
