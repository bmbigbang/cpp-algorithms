//
// Created by ardavan on 07/06/18.
//

#ifndef UDACITY_COURSE_MAIN_H
#define UDACITY_COURSE_MAIN_H

#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <cstdio>

using namespace std;

int compare(string& a, string& b)
{
    if (a.compare(b) >= 0) {
        return false;
    }
    return true;
}

#endif //UDACITY_COURSE_MAIN_H
