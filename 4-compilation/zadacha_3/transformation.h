#ifndef TRANSFORMATION
#define TRANSFORMATION

struct transformation
{
    long result;
    char error[100];
};

struct transformation Trans_function(char string[]);

#endif