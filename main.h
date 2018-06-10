//
// Created by ardavan on 07/06/18.
//

#ifndef UDACITY_COURSE_MAIN_H
#define UDACITY_COURSE_MAIN_H

#include <iostream>
#include <cstdio>

using namespace std;

bool isPrime(int n) {
    for (int i = 2; i <= (n / 2); i++) {
        if (isPrime(i) && n % i == 0) {
            return false;
        }
    }
    return true;
}


#endif //UDACITY_COURSE_MAIN_H
