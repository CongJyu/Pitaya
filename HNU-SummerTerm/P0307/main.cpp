// p0307

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string n;
    cin >> n;
    int total{};
    for (int i{}; i < (int) n.length(); ++i) {
        total += (n[i] - '0');
    }
    string out{to_string(total)};
    for (int i{}; i < (int) out.length(); ++i) {
        switch (out[i]) {
            case '0':
                cout << "ling ";
                break;
            case '1':
                cout << "yi ";
                break;
            case '2':
                cout << "er ";
                break;
            case '3':
                cout << "san ";
                break;
            case '4':
                cout << "si ";
                break;
            case '5':
                cout << "wu ";
                break;
            case '6':
                cout << "liu ";
                break;
            case '7':
                cout << "qi ";
                break;
            case '8':
                cout << "ba ";
                break;
            case '9':
                cout << "jiu ";
                break;
            default:
                break;
        }
    }
    cout << endl;
    return 0;
}
