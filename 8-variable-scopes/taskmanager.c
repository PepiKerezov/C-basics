#include <stdio.h>
#include <string.h>
#include "processes.h"
int main()
{
    for (int i = 0; i < 5; i++)
    {
        strcpy(processes[i].process_name, "");
        processes[i].process_num = 0;
    }
    while (1)
    {
        printf(" To create process enter 1 \n To see all processes enter 2 \n To stop a process enter 3 \n To exit enter 4 \n");
        int choice;
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf(" Enter process name to create \n");
            char name[30];
            scanf("%29s", name);
            int flag = createnewprocess(name);
            if (flag == 0)
            {
                printf(" There is no more space for processes \n");
            }
        }
        else if (choice == 2)
        {
            for (int i = 0; i < 5; i++)
            {
                printf("%d. name: %s ID %d \n", i, processes[i].process_name, processes[i].process_num);
            }
        }
        else if (choice == 3)
        {
            printf(" Enter the ID of the process \n");
            int num;
            scanf("%d", &num);
            stopprocess(num);
        }
        else if (choice == 4)
        {
            break;
        }
        else
        {
            printf("There isn't such option \n");
        }
    }

    return 0;
}