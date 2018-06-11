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

int compare(tuple<int, int>& a, tuple<int, int>& b)
{
    return ( get<1>(a) > get<1>(b) );
}

#endif //UDACITY_COURSE_MAIN_H
