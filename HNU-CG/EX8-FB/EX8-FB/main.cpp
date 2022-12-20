//
//  main.cpp
//  EX8-FB 填空题扑克牌
//
//  Created by Rain Chen on 2021/11/29.
//  Something wrong

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
typedef unsigned short us;
void shuffle(us card[]);
void swapCard(us * a, us * b);
void cut(us card[]);
void deal(us player[][13], us card[]);
void recorder(us(*p)[13]);
void buble(us a[], int n);
us convert(us b);
void display(us player[][13]);

int main() {
    us player[4][13];
    us card[53];
    
    shuffle(card);
    cut(card);
    deal(player, card);
    recorder(player);
    display(player);
    return 0;
}

void shuffle(us card[]) {
    srand(time(NULL));
    int loc1, loc2;
    for (int i = 0; i < 52; i++) {
        while (!(loc1 = rand() % 53));
        while (!(loc2 = rand() % 53));
        if (loc1 == loc2) {
            loc2 = loc1 + 1;
        }
        if (loc2 == 53) {
            loc2 = 1;
        }
        swapCard(&card[loc1], &card[loc2]);
    }
}

void swapCard(us * a, us * b) {
    us tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void cut(us card[]) {
    int loc;
    srand(time(NULL));
    while (!(loc = rand() % 52));
    us * p = new us [loc + 1];
    for (int i = 1; i <= loc; i++) {
        p[i] = card[i];
    }
    for (int i = loc + 1; i <= 52; i++) {
        card[i - loc] = card[i];
    }
    for (int i = 1; i <= loc; i++) {
        card[52 - loc + i] = p[i];
    }
    delete[] p;
}

void deal(us player[][13], us card[]) {
    us (*p) [13] = player;
    unsigned int j = 0, k = 0;
    us * start;
    for (int i = 1; i <= 52; i++) {
        start = *(p + k);
        start[j] = card[i];
        if (k == 3) {
            k = 0;
            j++;
        } else {
            k++;
        }
    }
}

void recorder(us (*p) [13]) {
    for (int i = 0; i < 4; i++) {
        buble(*p, 13);
        p++;
    }
}

void buble(us a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                unsigned int tmp;
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}

us convert(us b) {
    if (b % 13 == 1) {
        return 14;
    }
    if (b < 14) {
        return b;
    } else if (b < 27) {
        return b - 13;
    } else if (b < 40) {
        return b - 26;
    } else {
        return b - 39;
    }
}

void display(us player[][13]) {
    char * face[14] = {NULL, "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            if (player[i][j] < 14) {
                cout << "S";
            } else if (player[i][j] < 27) {
                cout << "H";
            } else if (player[i][j] < 40) {
                cout << "D";
            } else {
                cout << "C";
            }
            int point = convert(player[i][j]);
            if (point == 14) {
                point = 1;
            }
            cout << "(" << face[point] << ")";
        }
        cout << endl;
    }
}
