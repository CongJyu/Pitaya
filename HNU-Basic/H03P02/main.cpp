// h03p02

#include <iostream>

using namespace std;

void classify(int n) {
    if (n >= 90) {
        cout << "A" << endl;
    } else if (n >= 80 && n <= 89) {
        cout << "B" << endl;
    } else if (n >= 70 && n <= 79) {
        cout << "C" << endl;
    } else if (n >= 60 && n <= 69) {
        cout << "D" << endl;
    } else if (n <= 60) {
        cout << "E" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    int n = 0;  // score
    cin >> n;
    classify(n);
    return 0;
}
