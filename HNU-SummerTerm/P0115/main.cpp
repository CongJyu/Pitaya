// p0117
// wrong answer

#include <iostream>
#include <algorithm>

using namespace std;

struct Team {
    string name;
    int goal{};
    int point{};
};

bool cmp(const Team &t1, const Team &t2) {
    if (t1.point != t2.point) {
        return t1.point > t2.point;
    } else {
        return t1.goal > t2.goal;
    }
}

void solution() {
    Team x[4]{};
    for (int i{}; i < 12; ++i) {
        string host_name, guest_name;
        int host{}, guest{};
        string vs;
        cin >> host_name >> host >> vs >> guest >> guest_name;
        bool found_host{false}, found_guest{false};
        for (int j{}; j < 4; ++j) {
            if (x[j].name == host_name) {
                x[j].goal += host - guest;
                if (host > guest) {
                    x[j].point += 3;
                } else if (host == guest) {
                    x[j].point += 1;
                }
                found_host = true;
                break;
            }
            if (x[j].name == guest_name) {
                x[j].goal += guest - host;
                if (guest > host) {
                    x[j].point += 3;
                } else if (host == guest) {
                    x[j].point += 1;
                }
                found_guest = true;
                break;
            }
        }
        if (!found_host) {
            for (int k{}; k < 4; ++k) {
                if (x[k].name.empty()) {
                    x[k].name = host_name;
                    x[k].goal += host - guest;
                    if (host > guest) {
                        x[k].point += 3;
                    } else if (host == guest) {
                        x[k].point += 1;
                    }
                    break;
                }
            }
        }
        if (!found_guest) {
            for (int k{}; k < 4; ++k) {
                if (x[k].name.empty()) {
                    x[k].name = guest_name;
                    x[k].goal += guest - host;
                    if (guest > host) {
                        x[k].point += 3;
                    } else if (host == guest) {
                        x[k].point += 1;
                    }
                    break;
                }
            }
        }
    }
    // test
    for (int i{}; i < 4; ++i) {
        cout << x[i].name << " " << x[i].goal << endl;
    }
    // something went wrong with sort function
    sort(x, x + 4, cmp);
    cout << x[0].name << " " << x[1].name << endl;
}

int main() {
    ios::sync_with_stdio(false);
    int t{};
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
