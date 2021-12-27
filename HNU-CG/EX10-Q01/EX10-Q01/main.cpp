//
//  main.cpp
//  EX10-Q01 矩阵计算
//
//  Created by Rain Chen on 2021/12/24.
//

#include <iostream>
#include <cstdlib>

using namespace std;

class matrix {
private:
    int rows, cols;
    int **p;
public:
    matrix();
    matrix(int & M, int & N);
    matrix(matrix &A, int &&m, int &n);
    ~matrix();
    int det();
    void out();
    void input();
    matrix operator*(matrix & another);
};

matrix::matrix(int &M, int &N) {
    rows = M;
    cols = N;
    p = new int * [cols];
    for (int i = 0; i < M; i++) {
        p[i] = new int [cols];
    }
}

matrix::matrix(matrix &A, int &&m, int &n) {
    p = new int * [rows];
    for (int i = 0; i < rows; i++) {
        p[i] = new int [cols];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            p[i][j] = A.p[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = n + 1; j < A.cols; j++) {
            p[i][j - 1] = A.p[i][j];
        }
    }
    for (int i = m + 1; i < A.rows; i++) {
        for (int j = 0; j < n; j++) {
            p[i - 1][j - 1] = A.p[i][j];
        }
    }
}

matrix::~matrix() {
    for (int i = 0; i < rows; i++) {
        delete[] p[i];
    }
    delete[] p;
}

void matrix::out() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
}

void matrix::input() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> p[i][j];
        }
    }
}

matrix matrix::operator*(matrix &another) {
    matrix tmp(rows, another.cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < another.cols; j++) {
            tmp.p[i][j] = 0;
            for (int k = 0; k < cols; k++) {
                tmp.p[i][j] = tmp.p[i][j] + p[i][j] * another.p[k][j];
            }
        }
    }
    return tmp;
}

int matrix::det() {
    if (rows == 1) {
        return p[0][0];
    } else {
        int result = 0, flag;
        for (int i = 0; i < cols; i++) {
            flag = (i % 2) ? -1 : 1;
            matrix tmp(*this, 0, i);
            result = result + flag * p[0][i] * tmp.det();
        }
        return result;
    }
}

int main() {
    int M, N;
    cin >> M >> N;
    matrix mA(M, N);
    mA.input();
    int K, L;
    cin >> K >> L;
    matrix mB(K, L);
    mB.input();
    if (N == K) {
        matrix mm3 = mA * mB;
        mm3.out();
    }
    if (M == N) {
        cout << mA.det() << endl;
    }
    if (K == L) {
        cout << mB.det() << endl;
    }
    return 0;
}
