//
// Created by LIU Qingpei on 27/6/2017.
//

#ifndef SELECTIONSORTGENERATETESTCASES_SORTTESTHELPER_H
#define SELECTIONSORTGENERATETESTCASES_SORTTESTHELPER_H

#include <iostream>
#include <ctime>
#include <cassert>

using namespace std;

namespace SortTestHelper{
    //generate a random array with n elements ranging [rangeL,rangeR]
    int * generateRandomArray(int n, int rangeL, int rangeR){
        assert(rangeL<=rangeR);

        int *arr = new int[n];
        srand(time(NULL));
        for (int i=0;i<n;i++)
            arr[i] = rand()%(rangeR-rangeL+1)+rangeL;
        return arr;
    }

    //print arr
    template<typename T>
    void printArray(T arr[], int n) {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
        return;
    }

}

#endif //SELECTIONSORTGENERATETESTCASES_SORTTESTHELPER_H
