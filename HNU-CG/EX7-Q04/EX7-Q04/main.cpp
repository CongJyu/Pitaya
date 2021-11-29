//
//  main.cpp
//  EX7-Q04 炸弹
//
//  Created by Rain Chen on 2021/11/21.
//  Something wrong

//#include <iostream>
//#include <cstring>
//#include <string>
//using namespace std;
//int main() {
//    int t = 0, cnt = 0, cnt2 = 0, cnt3 = 0;
//    cin >> t;
//    int n = 0, m = 0;
//    while (cnt < t) {
//        cnt2 = 0;
//        cin >> n >> m;
//        char ** ground = new char *[m];
//        for (int i = 0; i < m; i++) {
//            ground[i] = new char[n];
//        }
//        for (int i = 0; i < m; i++) {
//            for (int j = 0; j < n; j++) {
//                cin >> ground[i][j];
//            }
//        }
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//                for (int r = 0; r < n; r++) {
//                    for (int c = 0; c < n; c++) {
//                        if (ground[r][c] == '*') {
//                            cnt3++;
//                            if (r == i || c == j) {
//                                cnt2++;
//                                continue;
//                            }
//                        }
//                    }
//                }
//            }
//        }
//        for (int i = 0; i < m; i++) {
//            delete [] (ground[i]);
//        }
//        delete [] ground;
//        if (cnt2 == cnt3) {
//            cout << "NO" << endl;
//        } else {
//            cout << "YES" << endl;
//        }
//        cnt++;
//    }
//    return 0;
//}

#include <iostream>
#include <map>
using namespace std;
int main() {
    map<int, int> M1;
    map<int, int> M2;
    int T, t;
    int width, length;
    cin >> T;
    while (T--) {
        M1.clear();
        M2.clear();
        int cnt = 0;
        cin >> width >> length;
        char ** ch = new char * [width];
        for (int i = 0; i < width; i++) {
            ch[i] = new char[length];
        }
        for (int i =0; i < width; i++) {
            for (int j = 0; j < length; j++) {
                cin >> ch[i][j];
                if (ch[i][j] == '*') {
                    M1[j]++;
                    M2[i]++;
                    cnt++;
                }
            }
        }
        bool flag = false;
        for (int i = 0; i < width; i++) {
            for (int j = 0; j < length; j++) {
                t = (ch[i][j] == '*') ? -1 : 0;
                if (M2[i] + M1[j] + t >= cnt) {
                    cout << "YES\n";
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                cout << "NO\n";
            }
            for (int i = 0; i < width; i++) {
                delete[] ch[i];
            }
        }
    }
    return 0;
}
