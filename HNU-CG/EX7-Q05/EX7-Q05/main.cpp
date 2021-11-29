//
//  main.cpp
//  EX7-Q05 激光镜像
//
//  Created by Rain Chen on 2021/11/23.
//

#include <iostream>
#include <cstring>
using namespace std;
int sum = 0;
int n, m, k;
short int ** grid;
unsigned short int * visited;
bool checkVisited(int x, int y, int UpDown, int LeftRight);
void trace(int x, int y, int UpDown, int LeftRight);
int main() {
    cin >> n >> m >> k;
    grid = new short int * [n + 2];
    for (int i = 0; i < n + 2; i++) {
        grid[i] = new short int [m + 2];
    }
    for (int i = 0; i < n + 2; i++) {
        memset(grid[i], 0, sizeof(short int) * (m + 2));
    }
    for (int j = 0; j < m + 2; j++) {
        grid[0][j] = grid[n + 1][j] = 1;
    }
    for (int i = 0; i < n+ 2; i++) {
        grid[i][0] = grid[i][m + 1] = 1;
    }
    visited = new unsigned short int [(n + 2) * (m + 2)];
    memset(visited, 0, sizeof(unsigned short int) * (n + 2) * (m + 2));
    for (int i = 1; i <= k; i++) {
        int x, y;
        cin >> x >> y;
        grid[x][y] = 1;
    }
    string s;
    int x, y, UpDown, LeftRight;
    cin >> x >> y >> s;
    if (s == "NE") {
        UpDown = -1, LeftRight = 1;
    } else if (s == "NW") {
        UpDown = -1, LeftRight = -1;
    } else if (s == "SE") {
        UpDown = 1, LeftRight = 1;
    } else {
        UpDown = 1, LeftRight = -1;
    }
    trace(x, y, UpDown, LeftRight);
    cout << sum << endl;
    return 0;
}
void trace(int x, int y, int UpDown, int LeftRight) {
    int LR, UD;
    if (checkVisited(x, y, UpDown, LeftRight)) {
        return;
    }
    int tmp = grid[x][y + LeftRight] * 4  + grid[x + UpDown][y + LeftRight] * 2
    + grid[x + UpDown][y];
    if (tmp == 3) {
        LR = 1, UD = -1;
    } else if (tmp == 7 || tmp == 2) {
        LR = -1, UD = -1;
    } else if (tmp == 6) {
        LR = -1, UD = 1;
    } else {
        LR = 1, UD = 1;
    }
    UpDown = UpDown * UD;
    LeftRight = LeftRight * LR;
    if (UD == 1) {
        x = x + UpDown;
    } else {
        y = y + LeftRight;
    }
    trace(x, y, UpDown, LeftRight);
}
bool checkVisited(int x, int y, int UpDown, int LeftRight) {
    unsigned short int dir;
    if (UpDown == -1 && LeftRight == 1) {
        dir = 8;
    } else if (UpDown == -1 && LeftRight == -1) {
        dir = 4;
    } else if (UpDown == 1 && LeftRight == 1) {
        dir = 2;
    } else {
        dir = 1;
    }
    if (visited[x * (m + 2) + y] == 0) {
        sum++;
    }
    if ((visited[x * (m + 2) + y] & dir) == dir) {
        return true;
    } else {
        visited[x * (m + 2) + y] = visited[x * (m + 2) + y] | dir;
    }
    return false;
}
