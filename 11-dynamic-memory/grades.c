#include <stdio.h>
#include <stdlib.h>

int main () {
    int grades_count;
    printf("Enter grades count \n");
    scanf("%d", &grades_count);
    if(grades_count < 0) {
        printf("Invalid count");
        return 0;
    }
    size_t arr_size = sizeof(float) * grades_count;
    float * grades = (float *)malloc(arr_size);
    if (grades != NULL) {
        for (int i = 0; i < grades_count; i++)
        {
            do {
            printf("\n Enter grade %d ", i + 1);
            scanf("%f", &grades[i]);
            }while(grades[i] < 2 || grades[i] > 6);
        }
    }
    else {
        printf("\n Error in memory");
        return 0;
    }
        
        while(1) {
            printf("To see average grade - 1 \n");
            printf("To add a grade - 2 \n");
            printf("To remove a grade - 3 \n");
            printf("To exit - 4 \n");
            int choice;
            scanf("%d", &choice);
            if(choice == 1) {
                float sum = 0;
                for (int i = 0; i < grades_count; i++)
                {
                    sum += grades[i];
                }
                sum = sum / grades_count;
                printf("\n Average grade is %f \n", sum);
            }
            else if (choice == 2) {
                printf("\n Enter number of grades to be added ");
                int new_count;
                scanf("%d", &new_count);
                if(new_count < 0) {
                    printf("\n Wrong number of grades ");
                }
                else{
                    int i = grades_count;
                    grades_count += new_count;
                    arr_size = sizeof(float) * grades_count;

                    grades = (float *)realloc(grades, arr_size);

                    if(grades == NULL) {
                        printf("\n Error in memory ");
                        return 0;
                    }

                    for (; i < grades_count; i++)
                    {
                        printf("\n Enter grade %d ", i + 1);
                        scanf("%f", &grades[i]);
                    }
                }
            }
            else if (choice == 3) {
                printf("\n Enter number of grades to be removed ");
                int new_count;
                scanf("%d", &new_count);
                if(new_count > grades_count) {
                    printf("\n Wrong number of grades ");
                }
                else{
                    
                    grades_count -= new_count;
                    arr_size = sizeof(float) * grades_count;

                    grades = (float *)realloc(grades, arr_size);

                    if(grades == NULL) {
                        printf("\n Error in memory");
                        return 0;
                    }
                }
            }
            else if (choice == 4){
                free(grades);
                break;
            }
            else if (choice == 5){
                for (int i = 0; i < grades_count; i++)
        {
            printf("\n grade %d = %f ", i + 1, grades[i]);
        }
            }
            else {
                printf("No such option");
            }

        }
        return 0;
    }