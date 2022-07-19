// t03p06

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int cnt[10] = {0};
    string input;
    getline(cin, input);
    for (char i: input) {
        switch (i) {
            case '0':
                cout << "(Zero)";
                cnt[0]++;
                break;
            case '1':
                cout << "(One)";
                cnt[1]++;
                break;
            case '2':
                cout << "(Two)";
                cnt[2]++;
                break;
            case '3':
                cout << "(Three)";
                cnt[3]++;
                break;
            case '4':
                cout << "(Four)";
                cnt[4]++;
                break;
            case '5':
                cout << "(Five)";
                cnt[5]++;
                break;
            case '6':
                cout << "(Six)";
                cnt[6]++;
                break;
            case '7':
                cout << "(Seven)";
                cnt[7]++;
                break;
            case '8':
                cout << "(Eight)";
                cnt[8]++;
                break;
            case '9':
                cout << "(Nine)";
                cnt[9]++;
                break;
            default:
                cout << i;
                break;
        }
    }
    cout << endl;
    cout << cnt[0];
    for (int i = 1; i < 10; ++i) {
        cout << " " << cnt[i];
    }
    cout << endl;
    return 0;
}
