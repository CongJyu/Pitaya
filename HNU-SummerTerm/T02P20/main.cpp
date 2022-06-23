// t02p20

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0, a = 0, b = 0;
    cin >> n >> a >> b;
    string ori;
    cin >> ori;
    int cost = a;
    int compressed = 1;
    while (compressed < n) {
        string uncompressed_str, compressed_str;
        uncompressed_str = ori.substr(0, compressed);
        bool is_sub = false;
        int len = 0;
        for (int i = (int) uncompressed_str.size(); i >= 1; i--) {
            compressed_str = ori.substr(compressed, i);
            if (uncompressed_str.find(compressed_str) != string::npos) {
                len = i;
                is_sub = true;
                break;
            }
        }
        if (is_sub && (int) compressed_str.size() * a > b) {
            cost += b;
            compressed += len;
        } else {
            cost += a;
            compressed++;
        }
    }
    cout << cost << endl;
    return 0;
}
