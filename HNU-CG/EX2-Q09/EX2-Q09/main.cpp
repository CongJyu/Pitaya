//
//  main.cpp
//  EX2-Q09 长度单位换算
//
//  Created by cyrain on 2021/11/15.
//

#include <iostream>
long input, mi, yd, ft, in;
int main() {
    using namespace std;
    const int MI_YD = 1760;
    const int YD_FT = 3;
    const int FT_IN = 12;
    cin >> input;
    mi = input / (MI_YD * YD_FT * FT_IN);
    yd = (input - mi * MI_YD * YD_FT * FT_IN) / (FT_IN * YD_FT);
    ft = (input - mi * MI_YD * YD_FT * FT_IN - yd * (FT_IN * YD_FT)) / FT_IN;
    in = input % FT_IN;
    if (mi != 0) {
        cout << mi << " mi ";
    }
    if (yd != 0) {
        cout << yd << " yd ";
    }
    if (ft != 0) {
        cout << ft << " ft ";
    }
    if (in != 0) {
        cout << in << " in";
    }
    return 0;
}
