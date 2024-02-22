#ifndef SCHOOLROOM
#define SCHOOLROOM

#include "person.h"

struct SchoolRoom
{
    int roomnumber;
    struct Person People[50];
};

#endif