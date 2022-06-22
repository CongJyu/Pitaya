// t01p12

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct Memory {
    int mark;
    int length;
    bool usable;

    Memory(int mark_t, int len, bool use_a) {
        this->mark = mark_t;
        this->length = len;
        this->usable = use_a;
    }
};

bool cmp(const Memory &a, const Memory &b) {
    if (a.usable != b.usable) {
        return a.mark < b.mark;
    }
    return a.usable <b.usable;
}

int main() {
    vector<Memory> mms;
    vector<Memory>::iterator it;
    string opt;
    int t, m, size_available;
    int number;
    int mark = 0;
    cin >> t >> m;
    size_available = m;
    for (int i = 0; i < t; ++i) {
        cin >> opt;
        if (opt != "defragment") {
            cin >> number;
            if (opt == "alloc") {
                if (number <= size_available) {
                    bool success_opt = false;
                    for (it = mms.begin(); it != mms.end(); it++) {
                        if (it->usable && it->length > number) {
                            cout << mark << endl;
                            int tmp = it->length;
                            it->mark = mark;
                            it->usable = false;
                            it->length = number;
                            mms.insert(it + 1, Memory(-1, tmp - it->length, true));
                            size_available -= number;
                            mark += 1;
                            success_opt = true;
                            break;
                        }
                    }
                    if (!success_opt) {
                        int sum = 0;
                        for (it = mms.begin(); it != mms.end(); it++) {
                            sum += it->length;
                        }
                        if ((m - sum) >= number) {
                            cout << mark << endl;
                            mms.emplace_back(mark, number, false);
                            size_available -= number;
                            mark++;
                        } else {
                            cout << "NULL" << endl;
                        }
                    }
                } else {
                    cout << "NULL" << endl;
                }
            } else {
                bool effective = false;
                for (it = mms.begin(); it != mms.end(); it++) {
                    if (it->mark == number) {
                        size_available += it->length;
                        it->usable = true;
                        it->mark = -1;
                        effective = true;
                        break;
                    }
                }
                if (!effective) {
                    cout << "ILLEGAL_ERASE_ARGUMENT" << endl;
                }
            }
        } else {
            sort(mms.begin(), mms.end(), cmp);
            for (int j = 0; j < (int)mms.size(); ++j) {
                if (mms[j].usable) {
                    it = mms.begin() + j;
                    mms.erase(it);
                }
            }
        }
    }
    return 0;
}
