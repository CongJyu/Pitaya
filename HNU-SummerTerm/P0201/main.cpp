// p0201

#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string input;
    while (getline(cin, input)) {
        string word;
        stack<string> sentence;
        for (int i{}; i < (int) input.length(); ++i) {
            if (input[i] != ' ') {
                word += input[i];
            } else {
                sentence.push(word);
                word.clear();
            }
        }
        if (!word.empty()) {
            sentence.push(word);
        }
        while (!sentence.empty()) {
            cout << sentence.top() << " ";
            sentence.pop();
        }
        cout << endl;
    }
    return 0;
}
