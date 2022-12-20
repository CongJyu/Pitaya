//
//  main.cpp
//  EX7-Q05 激光镜像
//
//  Created by Rain Chen on 2021/11/23.
//

#include <iostream>
using namespace std;

class unit {
public:
    bool isEmpty;
    int fx[2][2];
    unit() {
        fx[0][0] = fx[0][1] = fx[1][0] = fx[1][1] = 0;
        isEmpty = true;
    }
};

unit units[1002][1002];

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 0; i < m + 2; i++) {
        units[0][i].isEmpty = units[n + 1][i].isEmpty = false;
    }
    for (int i = 0; i < n + 2; i++) {
        units[i][0].isEmpty = units[i][m + 1].isEmpty = false;
    }
    
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        units[x][y].isEmpty = false;
    }
    
    int x, y;
    string fx;
    cin >> x >> y >> fx;
    
    int dx, dy;
    if (fx == "NE") {
        dx = 1;
        dy = -1;
    } else if (fx == "NW") {
        dx = -1;
        dy = -1;
    } else if (fx == "SE") {
        dx = 1;
        dy = 1;
    } else {
        dx = -1;
        dy = 1;
    }
    
    int sum = 0;
    while (true) {
        if (units[x][y].fx[(dx + 1) / 2][(dy + 1) / 2] != 0) {
            break;
        }
        
        units[x][y].fx[(dx + 1) / 2][(dy + 1) / 2] = 1;
        
        if (units[x][y].fx[0][0] + units[x][y].fx[0][1]
            + units[x][y].fx[1][0] + units[x][y].fx[1][1] == 1) {
            sum++;
        }
        
        if (units[x + dx][y + dy].isEmpty) {
            x += dx;
            y += dy;
        } else if (units[x + dx][y + dy].isEmpty == false
                   && units[x + dx][y].isEmpty == false
                   && units[x][y + dy].isEmpty == false) {
            dx = -dx;
            dy = -dy;
        } else if (units[x + dx][y + dy].isEmpty == false
                   && units[x + dx][y].isEmpty == false) {
            y += dy;
            dx = -dx;
        } else if (units[x + dx][y + dy].isEmpty == false
                   && units[x][y + dy].isEmpty == false) {
            x += dx;
            dy = -dy;
        } else {
            dx = -dx;
            dy = -dy;
        }
    }
    cout << sum << endl;
    return 0;
}
