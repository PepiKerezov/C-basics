#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "processes.h"

struct Process processes[5];
int processcount = 0;

static int nextprocessid()
{
    int random = rand();
    int free = 0;
    for (int i = 0; i < 5; i++)
    {
        if (random == processes[i].process_num)
        {
            free = 1;
        }
    }
    if (free == 0)
    {
        return random;
    }
    else
    {
        return 0;
    }
}

int createnewprocess(char name[30])
{
    int num = nextprocessid();
    if (processcount >= 5)
    {
        return 0;
    }
    if (num == 0)
    {
        return 0;
    }
    else
    {
        strcpy(processes[processcount].process_name, name);
        processes[processcount].process_num = num;
        processcount++;
        return num;
    }
}

void stopprocess(int num)
{
    for (int i = 0; i < 5; i++)
    {
        if (num == processes[i].process_num)
        {
            for (; i < 4; i++)
            {
                strcpy(processes[i].process_name, processes[i + 1].process_name);
                processes[i].process_num = processes[i + 1].process_num;
            }
            strcpy(processes[4].process_name, "");
            processes[4].process_num = 0;
            processcount--;
        }
    }
}