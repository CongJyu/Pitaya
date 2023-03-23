// #include "cAlg.h"
#include "cAlg.cpp"
#include <iostream>
#include <chrono>

const int TEST_TIMES = 1;

int main() {
    //时间戳与时间段变量初始化
    auto t0 = std::chrono::high_resolution_clock::now();
    auto t1 = t0, t2 = t0, t3 = t0, t4 = t0, t5 = t0;
    std::chrono::duration<double> deltaT1{}, deltaT2{}, deltaT3{}, deltaT4{}, deltaT5{};

    cAlg<double> mycAlg;
    for (int i = 1; i <= TEST_TIMES; ++i) {
        mycAlg.setTest(200 * i); //设置排序数据量

        //执行算法并记录时间戳
        t0 = std::chrono::high_resolution_clock::now();
        mycAlg.Alg_sort1();
        t1 = std::chrono::high_resolution_clock::now();
        mycAlg.Alg_sort2();
        t2 = std::chrono::high_resolution_clock::now();
        mycAlg.Alg_sort3();
        t3 = std::chrono::high_resolution_clock::now();
        mycAlg.Alg_sort4();
        t4 = std::chrono::high_resolution_clock::now();
        mycAlg.Alg_sort5();
        t5 = std::chrono::high_resolution_clock::now();

        //时间戳计算
        deltaT1 = t1 - t0;
        deltaT2 = t2 - t1;
        deltaT3 = t3 - t2;
        deltaT4 = t4 - t3;
        deltaT5 = t5 - t4;

        std::cout << deltaT1.count();

    }
}
