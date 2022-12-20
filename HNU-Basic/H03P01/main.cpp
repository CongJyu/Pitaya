// h03p01

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    bool flag3 = false, flag5 = false, flag7 = false;
    if (n % 3 == 0) {
        flag3 = true;
    }
    if (n % 5 == 0) {
        flag5 = true;
    }
    if (n % 7 == 0) {
        flag7 = true;
    }
    if (flag3 && flag5 && flag7) {
        cout << "It's divisible by 3,5,7" << endl;
    } else if (flag3 && !flag5 && !flag7) {
        cout << "It's divisible by 3" << endl;
    } else if (!flag3 && flag5 && !flag7) {
        cout << "It's divisible by 5" << endl;
    } else if (!flag3 && !flag5 && flag7) {
        cout << "It's divisible by 7" << endl;
    } else if (flag3 && flag5 && !flag7) {
        cout << "It's divisible by 3,5" << endl;
    } else if (flag3 && !flag5 && flag7) {
        cout << "It's divisible by 3,7" << endl;
    } else if (!flag3 && flag5 && flag7) {
        cout << "It's divisible by 5,7" << endl;
    } else if (!flag3 && !flag5 && !flag7) {
        cout << "null" << endl;
    }
    return 0;
}
