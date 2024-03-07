#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERROR_H(pointer) if (pointer == NULL) { \
printf("Error"); \
return 1;\
}

#define FREE(dpointer, rows) for (int i = 0; i < rows; i++) {\
    free(dpointer[i]);\
    }\
    free(dpointer);

int Str(char **strings, int rows, int index)
{
    char str[15];
    int col;
    for (; index < rows; index++)
    {
        printf("\n Enter name: ");
        scanf("%s", str);
        col = strlen(str);
        strings[index] = (char *)malloc(sizeof(char) * col);
        ERROR_H(strings[index])
        for (int j = 0; j < col; j++)
        {
            strings[index][j] = str[j];
        }
    }

    return 0;
}

int main()
{
    int subCount = 0;
    do
    {
        printf("\n Enter subject count: ");
        scanf("%d", &subCount);
    } while (subCount < 0);
    char **sub = (char **)malloc(sizeof(char *) * subCount);
    ERROR_H(sub)
    if (Str(sub, subCount, 0))
    {
        printf("Error");
        return 1;
    }
    int stCount = 0;
    int start;
    char **st = (char **)malloc(sizeof(char *) * stCount);
    ERROR_H(st)
    float **grades = (float **)malloc(sizeof(float) * stCount);
    ERROR_H(grades)
    while(1) {
        printf("\n To add new student - 1 ");
        printf("\n To see notebook - 2 ");
        printf("\n To exit - 3 ");
        int choice = 0;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n Enter number of students to be added \n (if you want to delete students enter negative number): ");
            int change = 0;
            scanf("%d", &change);
            if (change + stCount < 0) {
                printf("Not enough students");
                break;
            }
           
            start = stCount;
            stCount += change;
            char **st = (char **)realloc(st, sizeof(char *) * stCount);
            ERROR_H(st)
            if (Str(st, stCount, start)) {
                printf("Error");
                return 1;
            }
            float **grades = (float **)realloc(grades, sizeof(float) * stCount);
            ERROR_H(grades)
            for (int i = start; i < stCount; i++) {
                grades[i] = (float *)malloc(subCount * sizeof(int));
                ERROR_H(grades[i])
                for (int j = 0; j < subCount; j++) {
                    do {
                        printf("\n Enter grade for %s in %s: ", st[i], sub[j]);
                        scanf("%f", &grades[i][j]);
                    } while (grades[i][j] < 2 || grades[i][j] > 6);
                }
            }
            
            break;
        case 2:
            printf("%15s", "\0");
            for (int i = 0; i < subCount; i++)
            {
                printf("%15s", sub[i]);
            }
            printf("\n ");
            for (int i = 0; i < stCount; i++) {
                printf("%15s", st[i]);
                for (int j = 0; j < subCount; j++) {
                    printf("%15f", grades[i][j]);
                }
                printf("\n ");
            }
            break;
        case 3:
        FREE(sub, subCount)
        FREE(st, stCount)
        FREE(grades, stCount)
            return 0;
            break;
        
        default:
            printf("NO such option");
            break;
        }

    }
    return 0;
}