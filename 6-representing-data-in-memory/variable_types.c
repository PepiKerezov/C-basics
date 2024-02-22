#include <stdio.h>
#include <limits.h>

#define TYPE_INFO(type, sformat, size, max, min, uformat, umax) printf("%-20s %-10s %-10zu %-30lld %-30lld %-10s %-30llu \n", \
                                                                       type, sformat, size, max, min, uformat, umax);

int main()
{
    printf("%-20s %-10s %-10s %-30s %-30s %-10s %-30s \n ", "Type", "Sformat", "Size (bytes)", "Max (signed)", "Min (signed)", "Uformat", "Max (unsigned)");

    TYPE_INFO("int", "d", sizeof(int), INT_MAX, INT_MIN, "u", UINT_MAX)
    TYPE_INFO("char", "c", sizeof(char), CHAR_MAX, CHAR_MIN, "uc", UCHAR_MAX)
    TYPE_INFO("short", "hd", sizeof(short), SHRT_MAX, SHRT_MIN, "hu", USHRT_MAX)
    TYPE_INFO("long", "d", sizeof(long), LONG_MAX, LONG_MIN, "lu", ULONG_MAX)
    TYPE_INFO("long long", "d", sizeof(long long), LLONG_MAX, LLONG_MIN, "llu", ULLONG_MAX)

    return 0;
}