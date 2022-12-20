//
//  main.cpp
//  HW9-Part-01 矩阵相加
//
//  Created by Rain Chen on 2021/12/21.
//

#include <iostream>
using namespace std;

class Matrix {
public:
    Matrix();
    void input();
    void display();
    friend Matrix operator+(Matrix&, Matrix&);
    friend istream & operator>>(istream&, Matrix&);
    friend ostream & operator<<(ostream&, Matrix&);
private:
    int mat[2][3];
};

Matrix::Matrix() {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            mat[i][j] = 0;
        }
    }
}

Matrix operator+(Matrix& a, Matrix& b) {
    Matrix c;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            c.mat[i][j] = a.mat[i][j] + b.mat[i][j];
        }
    }
    return c;
}

istream & operator>>(istream & in, Matrix & m) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            in >> m.mat[i][j];
        }
    }
    return in;
}

ostream & operator<<(ostream & out, Matrix & m) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << m.mat[i][j] << " ";
        }
        cout << endl;
    }
    return out;
}

int main() {
    Matrix a, b, c;
    cin >> a;
    cin >> b;
    c = a + b;
    cout << c;
//    system("pause");
    return 0;
}
