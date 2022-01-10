//
//  main.cpp
//  EX9-Q01 评委打分
//
//  Created by Rain Chen on 2021/12/6.
//

//#include <iostream>
//#include <string>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//struct Competitors {
//    string name;
//    int score[7];
//    int total;
//};
//
//bool cmp(Competitors a, Competitors b) {
//    if (a.total != b.total) {
//        return a.total > b.total;
//    } else {
//        return a.total < b.total;
//    }
//}
//
//int main() {
//    int n = 0;
//    cin >> n;
//    Competitors stu[100];
//    for (int i = 0; i < 4; i++) {
//        cin >> stu[i].name;
//        stu[i].total = 0;
//        for (int j = 0; j < 7; j++) {
//            cin >> stu[i].score[j];
//        }
//        sort(stu[i].score, stu[i].score + 7);
//        for (int k = 1; k < 7 - 1; k++) {
//            stu[i].total += stu[i].score[k];
//        }
//    }
//    sort(stu, stu + n, cmp);
//    for (int i = 0; i < n; i++) {
//        cout << stu[i].name << " " << stu[i].total << endl;
//    }
//    return 0;
//}

#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
class student {
public:
    string name;
    int score;
};
int main() {
    int n;
    cin >> n;
    student * ss = new student [n];
    for (int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        ss[i].name = tmp;
        int a[7];
        int mx = -101;
        int mi = 101;
        int sum = 0;
        for (int i = 0; i < 7; i++) {
            cin >> a[i];
            sum += a[i];
            mx = max(a[i], mx);
            mi = min(a[i], mi);
        }
        ss[i].score = sum - mi - mx;
    }
    sort(ss, ss + n, [&](student a, student b) {
        return a.score > b.score;
    });
    for (int i = 0; i < n; i++) {
        cout << ss[i].name << " " << ss[i].score << endl;
    }
    delete [] ss;
    return 0;
}
