//
//  main.cpp
//  EX9-Q06 青蛙与蚊子
//
//  Created by Rain Chen on 2021/12/7.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

struct Frog {
    int site;
    int length;
    int eat = 0;
    int num;
};

struct Mosq {
    int site;
    int weight;
    bool live = true;
};

bool cmp1(Frog a, Frog b) {
    return a.site < b.site;
}
bool cmp2(Frog a, Frog b) {
    return a.num < b.num;
}

int main() {
    int n = 0, m = 0;
    cin >> n >> m;
    Frog * fr = new Frog [n];
    Mosq * mo = new Mosq [m];
    for (int k = 0; k < n; k++) {
        cin >> fr[k].site >> fr[k].length;
        fr[k].num = k;
    }
    for (int k = 0; k < m; k++) {
        cin >> mo[k].site >> mo[k].weight;
    }
    sort(fr, fr + n, cmp1);
    for (int a = 0; a < m; a++) {
        for (int b = 0; b < n; b++) {
            if (mo[b].site + fr[b].length >= mo[a].site && fr[b].site <= mo[a].site && mo[a].live) {
                fr[b].length += mo[a].weight;
                fr[b].eat++;
                mo[a].live = false;
                a = -1;
                break;
            }
        }
    }
    sort(fr, fr + m, cmp2);
    for (int k = 0; k < n; k++) {
        cout << fr[k].eat << " " << fr[k].length << endl;
    }
    return 0;
}
