#include <stdio.h>

int main()
{
    unsigned char lights = 0;

    while (1)
    {
        printf(" To switch lights enter 1 \n To print state enter 2 \n To exit enter 3 \n");
        int choice;
        scanf("%d", &choice);
        if (choice == 3)
        {
            break;
        }

        else if (choice == 1)
        {
            printf(" Enter light number ");
            int light_num;
            scanf("%d", &light_num);

            unsigned char temp = 1 << (light_num - 1);
            lights = lights ^ temp;
        }
        else
        {
            printf(" The light is on in rooms: ");

            for (int i = 0; i < 8; i++)
            {
                if ((lights) & (1 << i))
                {
                    printf(" %d ", i + 1);
                }
            }
        }
    }

    return 0;
}