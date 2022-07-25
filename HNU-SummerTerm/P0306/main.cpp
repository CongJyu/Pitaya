// p0306

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string input;
    getline(cin, input);
    int c[10]{};
    for (int i{}; i < (int) input.length(); ++i) {
        switch (input[i]) {
            case '0':
                cout << "(Zero)";
                c[0]++;
                break;
            case '1':
                cout << "(One)";
                c[1]++;
                break;
            case '2':
                cout << "(Two)";
                c[2]++;
                break;
            case '3':
                cout << "(Three)";
                c[3]++;
                break;
            case '4':
                cout << "(Four)";
                c[4]++;
                break;
            case '5':
                cout << "(Five)";
                c[5]++;
                break;
            case '6':
                cout << "(Six)";
                c[6]++;
                break;
            case '7':
                cout << "(Seven)";
                c[7]++;
                break;
            case '8':
                cout << "(Eight)";
                c[8]++;
                break;
            case '9':
                cout << "(Nine)";
                c[9]++;
                break;
            default:
                cout << input[i];
                break;
        }
    }
    cout << endl;
    for (int i{}; i < 10; ++i) {
        cout << c[i] << " ";
    }
    cout << endl;
    return 0;
}
