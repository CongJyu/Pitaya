//
// Created by Rain Chen on 23/3/2023.
//

#include "cAlg.h"
//
// Created by 72418 on 2023/3/23.
//

#include <algorithm>
#include <random>

template<typename T>
void cAlg<T>::Alg_sort1() {
    //straight insertion sort
    for (int i = 1; i < N; ++i) { //除了第一个数字，每一个数字都要插入到合适位置，总共N-1次
        T temp = D1[i];
        //一直往前移动直到不小于前一个数，此时前面已经有i个数字，最多移动i次
        int j = i;
        while (j > 0 && D1[j - 1] > temp) {
            D1[j] = D1[j - 1];
            --j;
        }
        D1[j] = temp;
    }
}

template<typename T>
void cAlg<T>::Alg_sort2() {
    //straight selection sort
    for (int i = 0; i < N - 1; ++i) { //选择最小的数字选择N-1次
        int index = i;
        for (int j = i + 1; j < N; ++j) {
            if (D2[j] < D2[index]) {
                index = j;
            }
        }
        if (index != i) {
            std::swap(D2[i], D2[index]);
        }
    }
}

template<typename T>
void cAlg<T>::quicksortHelper(T *D, int l, int r) {
    if (l >= r)return;
    int m = quicksort1(D, l, r);
    quicksortHelper(D, l, m - 1);
    quicksortHelper(D, m + 1, r);
}

template<typename T>
int cAlg<T>::quicksort1(T *D, int l, int r) {
    int li = l, ri = r;//left index & right index
    while (true) {
        while (D[li] <= D[l])++li;
        while (D[ri] > D[l])--ri;
        if (li >= ri)break;
        std::swap(D[li], D[ri]);
    }
    //最终小于等于的都在左边，大于的都在右边，li指向大于区域的第一个值，ri指向小于区域的最后一个值
    std::swap(D[l], D[ri]);
    return ri;
}

template<typename T>
void cAlg<T>::Alg_sort3() {
    //quick sort
    quicksortHelper(D3, 0, N - 1);
}

template<typename T>
void cAlg<T>::Alg_sort4() {
    //bubble sort
    for (int i = 0; i < N - 1; ++i) {
        for (int j = 0; j < N - i - 1; ++j) {
            if (D4[j] > D4[j + 1])std::swap(D4[j], D4[j + 1]);
        }
    }
}

template<typename T>
void cAlg<T>::Alg_sort5() {
    //heap sort
    for (int i = N / 2 - 1; i >= 0; --i) {
        heapShiftDown(i, N);
    }
    for (int i = N - 1; i > 0; --i) {
        std::swap(D5[0], D5[i]);
        heapShiftDown(0, i);
    }
}

template<typename T>
void cAlg<T>::heapShiftDown(int index, int n) { //对n个数的堆，shift down 第index个数
    T temp = D5[index];
    while (2 * index + 1 < n) {
        int larger = 2 * index + 1;
        if (larger + 1 < n && D5[larger] < D5[larger + 1])++larger;
        if (D5[larger] < temp)break;
        D5[index] = D5[larger];
        index = larger;
    }
    D5[index] = temp;
}

template<typename T>
void cAlg<T>::setTest(int n) {
    N = n;
    newData();
}

template<typename T>
void cAlg<T>::newData() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<T> distrib(0, 100); // 左闭右闭区间
    for (int i = 0; i < 2001; ++i) {
        D1[i] = D2[i] = D3[i] = D4[i] = D5[i] = distrib(gen);
    }
}
