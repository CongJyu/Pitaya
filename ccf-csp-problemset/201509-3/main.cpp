// ccf-csp 201509-3

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{}, m{};
    cin >> n >> m;
    string name, email, address;
    vector<string> html;
    while (n--) {
        string tag;
        getline(cin, tag);
        html.push_back(tag);
    }
    while (m--) {
        string id;
        cin >> id;
        if (id == "name") {
            cin >> name;
        } else if (id == "email") {
            cin >> email;
        } else if (id == "address") {
            cin >> address;
        }
    }
    for (int i{}; i < (int) html.size(); ++i) {
        if (html.at(i).find("name") != string::npos) {
            cout << " ";
            for (int j{1}; j < (int) name.length() - 1; ++j) {
                cout << name[j];
            }
        } else if (html.at(i).find("email") != string::npos) {
            for (int j{1}; j < (int) email.length() - 1; ++j) {
                cout << email[j];
            }
        } else if (html.at(i).find("address") != string::npos) {
            cout << " ";
            for (int j{}; j < (int) address.length() - 1; ++j) {
                cout << address[j];
            }
        }
        if (html.at(i).find("<title>") == string::npos or
            html.at(i).find("<a href=") == string::npos or
            html.at(i).find("<p>") == string::npos or
            html.at(i).find("<h1>") == string::npos) {
            cout << endl;
        }
    }
    return 0;
}
