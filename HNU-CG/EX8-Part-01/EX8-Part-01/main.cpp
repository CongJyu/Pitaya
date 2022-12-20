//
//  main.cpp
//  EX8-Part-01 数组奇偶排列
//
//  Created by Rain Chen on 2021/11/29.
//

#include <iostream>
void qsort(int arr[], int low, int high);
void Swap(int * a, int * b);
void arrange(int a[], int n);
using namespace std;
int main() {
    int n;
    cin >> n;
    int * a = new int [n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    arrange(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
void arrange(int a[], int n) {
    int * p = a, * q = a + n - 1;
    while (p < q) {
        while (*p % 2 == 1) {
            p++;
        }
        while (*q % 2 == 0) {
            q--;
        }
        if (p < q) {
            swap(*p, *q);
            p++;
            q--;
        }
    }
    int m;
    if (p == q) {
        m = *p % 2 ? (p - a) : (p - a - 1);
    } else {
        m = q - a;
    }
    qsort(a, 0, m);
    qsort(a, m + 1, n - 1);
}
void qsort(int *p, int low, int high) {
    if (high <= low) {
        return;
    }
    int key = p[low];
    int i = low, j = high + 1;
    while (1) {
        while (p[--j] > key) {
            if (j == low) {
                break;
            }
            if (i >= j) {
                break;
            }
            Swap(&p[i], &p[j]);
        }
        Swap(&p[low], &p[j]);
        qsort(p, low, j - 1);
        qsort(p, j + 1, high);
    }
}
void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
