#ifndef PROCESSES
#define PROCESSES

struct Process
{

    int process_num;
    char process_name[30];
};

extern struct Process processes[5];

extern int processcount;

static int nextprocessid();

int createnewprocess(char name[30]);

void stopprocess(int process_ID);

#endif