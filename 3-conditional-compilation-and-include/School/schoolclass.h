#ifndef SCHOOLCLASS
#define SCHOOLCLASS

#include "person.h"

struct SchoolClass
{
    struct Person SchoolClass[26];
    char paralenka;
    int classnumber;
    struct Person Classteacher[10];
};

#endif