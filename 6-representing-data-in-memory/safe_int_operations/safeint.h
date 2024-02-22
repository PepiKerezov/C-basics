#ifndef SAFEINT
#define SAFEINT

struct SafeResult
{
    int value;
    char errorflag;
};

struct SafeResult safeadd(int num1, int num2);
struct SafeResult safesubstract(int num1, int num2);
struct SafeResult safemultiply(int num1, int num2);
struct SafeResult safedivide(int num1, int num2);
struct SafeResult safestrtoint(char *string);

#endif