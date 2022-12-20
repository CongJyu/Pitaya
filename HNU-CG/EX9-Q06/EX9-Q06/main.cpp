//
//  main.cpp
//  EX9-Q06 青蛙与蚊子
//
//  Created by Rain Chen on 2021/12/7.
//

//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <cstring>
//using namespace std;
//
//struct Frog {
//    int site;
//    int length;
//    int eat = 0;
//    int num;
//};
//
//struct Mosq {
//    int site;
//    int weight;
//    bool live = true;
//};
//
//bool cmp1(Frog a, Frog b) {
//    return a.site < b.site;
//}
//bool cmp2(Frog a, Frog b) {
//    return a.num < b.num;
//}
//
//int main() {
//    int n = 0, m = 0;
//    cin >> n >> m;
//    Frog * fr = new Frog [n];
//    Mosq * mo = new Mosq [m];
//    for (int k = 0; k < n; k++) {
//        cin >> fr[k].site >> fr[k].length;
//        fr[k].num = k;
//    }
//    for (int k = 0; k < m; k++) {
//        cin >> mo[k].site >> mo[k].weight;
//    }
//    sort(fr, fr + n, cmp1);
//    for (int a = 0; a < m; a++) {
//        for (int b = 0; b < n; b++) {
//            if (mo[b].site + fr[b].length >= mo[a].site && fr[b].site <= mo[a].site && mo[a].live) {
//                fr[b].length += mo[a].weight;
//                fr[b].eat++;
//                mo[a].live = false;
//                a = -1;
//                break;
//            }
//        }
//    }
//    sort(fr, fr + m, cmp2);
//    for (int k = 0; k < n; k++) {
//        cout << fr[k].eat << " " << fr[k].length << endl;
//    }
//    return 0;
//}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct frog {
    int id;
    int x;
    int t;
    int cd = 0;
};

struct skeeter {
    int x;
    int b;
    bool iseaten = false;
};

class cmp {
public:
    bool operator()(frog qw1, frog qw2) {
        return qw1.id < qw2.id;
    }
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<frog> qw(n);
    for (int i = 0; i < n; i++) {
        cin >> qw[i].x >> qw[i].t;
        qw[i].id = i;
    }
    sort(qw.begin(), qw.end(), [&](frog a1, frog a2) {
        return a1.x < a2.x;
    });
    vector<skeeter> wz(m);
    for (int i = 0; i < m; i++) {
        cin >> wz[i].x >> wz[i].b;
        for (int j = 0; j <= i; j++) {
            if (wz[j].iseaten == false) {
                for (int k = 0; k < n; k++) {
                    if (qw[k].x <= wz[j].x && (qw[k].x + qw[k].t) >= wz[j].x) {
                        qw[k].cd++;
                        qw[k].t += wz[j].b;
                        wz[j].iseaten = true;
                        j = -1;
                        break;
                    }
                }
            }
        }
    }
    sort(qw.begin(), qw.end(), [&](frog a1, frog a2) {
        return a1.id < a2.id;
    });
    for (auto it:qw) {
        cout << it.cd << " " << it.t << endl;
    }
    return 0;
}
