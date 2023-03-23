//
// Created by Rain Chen on 23/3/2023.
//

#ifndef SORTS_CALG_H
#define SORTS_CALG_H

//
// Created by 72418 on 2023/3/23.
//

template<typename T>
class cAlg {
private:
    int N = 0;
    T D1[2001]{};
    T D2[2001]{};
    T D3[2001]{};
    T D4[2001]{};
    T D5[2001]{};

    void quicksortHelper(T *D, int l, int r); //快速排序整体

    int quicksort1(T *D, int l, int r); //一次快速排序

    void heapShiftDown(int index, int n);

    void newData();

public:
    cAlg() = default;

    ~cAlg() = default;

    void setTest(int n); //将实验重新设为n个数

    void Alg_sort1(); //straight insertion sort

    void Alg_sort2(); //straight selection sort

    void Alg_sort3(); //quick sort

    void Alg_sort4(); //bubble sort

    void Alg_sort5(); //heap sort

};

#endif //SORTS_CALG_H
