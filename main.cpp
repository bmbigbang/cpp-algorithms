#include "main.h"

int main() {
    int size1 = 2;
    int size2 = 4;
    int list1[size1] = {45, 56};
    int list2[size2] = {67, 88, 90, 1};

    int size3 = size1 + size2;
    int list3[size3];
    mergeSort(list1, list2, list3, size1, size2);


    for (int i = size1 + size2 - 1; i >= 0; i--) {
        cout << list3[i] << endl;
    }
}