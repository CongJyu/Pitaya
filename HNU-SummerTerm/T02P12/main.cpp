// t02p12

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string tmp;
    vector<string> dic;
    while (true) {
        cin >> tmp;
        if (tmp == "#") {
            break;
        }
        dic.push_back(tmp);
    }
    vector<string> req;
    while (true) {
        cin >> tmp;
        if (tmp == "#") {
            break;
        }
        req.push_back(tmp);
    }

    return 0;
}
