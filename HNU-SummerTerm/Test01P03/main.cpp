// 测试 1 问题 3

#include <iostream>

using namespace std;

int main() {
    int t = 0, m = 0;
    cin >> t >> m;
    int *a = new int[m];
    for (int i = 0; i < m; ++i) {
        a[i] = 0;
    }
    int x = 1;
    while (t--) {
        string str;
        int n;
        cin >> str;
        if (str != "defragment") {
            cin >> n;
        }
        int flag = 0;
        if (str == "alloc") {
            int left;
            int right;
            for (int j = 0; j < m; ++j) {
                if (a[j] == 0) {
                    left = j;
                    while (a[j] == 0) {
                        j++;
                        if (j == m) {
                            break;
                        }
                    }
                    right = j;
                    int len = right - left;
                    if (len >= n) {
                        flag = 1;
                        for (int i1 = left; i1 < left + n; i1++) {
                            a[i1] = x;
                        }
                        break;
                    }
                }
            }
            if (flag == 1) {
                cout << x << endl;
                x++;
            } else {
                cout << "NULL" << endl;
            }
        } else if (str == "erase") {
            int key = n;
            for (int i = 0; i < m; ++i) {
                if (a[i] == key) {
                    flag = 1;
                    a[i] = 0;
                }
            }
            if (flag == 0) {
                cout << "ILLEGAL_ERASE_ARGUMENT" << endl;
            }
        } else if (str == "defragment") {
            int *temp = new int[m];
            for (int i1 = 0; i1 < m; ++i1) {
                temp[i1] = 0;
            }
            int k = 0;
            for (int i = 0; i < m; ++i) {
                if (a[i] != 0) {
                    temp[k] = a[i];
                    k++;
                }
            }
            for (int i2 = 0; i2 < m; ++i2) {
                a[i2] = temp[i2];
            }
        }
    }
    delete[] a;
    return 0;
}
