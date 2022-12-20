// p0408

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    while (true) {
        string start;
        cin >> start;
        if (start == "ENDOFINPUT") {
            break;
        }
        string encrypted_sentence;
        cin.get();
        getline(cin, encrypted_sentence);
        string end;
        cin >> end;
        for (char i: encrypted_sentence) {
            if (i >= 'A' and i <= 'Z') {
                if ((char) (i - 5) < 'A') {
                    cout << (char) (i - 5 + 26);
                } else {
                    cout << (char) (i - 5);
                }
            } else {
                cout << i;
            }
        }
        cout << endl;
    }
    return 0;
}
