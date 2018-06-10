//
// Created by ardavan on 07/06/18.
//

#ifndef UDACITY_COURSE_MAIN_H
#define UDACITY_COURSE_MAIN_H

#include <iostream>
#include <cstdio>

using namespace std;

void mergeSort(int list1[], int list2[], int* list3, int size1, int size2) {
    int size3 = size1 + size2;

    for (int i = 0; i < size1; i++) {
        list3[i] = list1[i];
    }
    for (int i = 0; i < size2; i++) {
        list3[i + size1] = list2[i];
    }

    int temp;
    for (int i = 0; i < size3 - 1; i++) {
        for (int j = i; j < size3; j++) {
            if (list3[i] > list3[j]) {
                temp = list3[j];
                list3[j] = list3[i];
                list3[i] = temp;
            }
        }
    }

}


#endif //UDACITY_COURSE_MAIN_H
