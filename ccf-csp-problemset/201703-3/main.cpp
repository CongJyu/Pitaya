// ccf-csp 201703-3

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string line;
    while (getline(cin, line)) {
        if (line.find('#') == string::npos) {
            // 段落
            cout << "<p>" << line << "</p>" << endl;
        } else if (line.find('#') != string::npos) {
            // 标题
            cout << "<h1>";
            for (int i{2}; i < (int) line.length(); ++i) {
                cout << line[i];
            }
            cout << "</h1>" << endl;
        }
    }
    return 0;
}
