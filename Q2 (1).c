#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int total = get_int("Enter total number of classes: ");
    int attended = get_int("Enter number of classes attended: ");

    float percentage = ((float)attended / total) * 100;

    if (percentage >= 75)
    {
        printf("Allowed to sit in exam\n");
        printf("Attendance: %.2f%%\n", percentage);
        printf("You already met the 75%% requirement.\n");
    }
    else
    {
        printf("Not allowed\n");
        printf("Attendance: %.2f%%\n", percentage);

        int required = (0.75 * total);

        if ((0.75 * total) > required)
        {
            required = required + 1;
        }

        int more_needed = required - attended;

        if (more_needed < 0)
        {
            more_needed = 0;
        }

        printf("You were needed to attend %d more classes to reach 75%%.\n", more_needed);
    }

    return 0;
}
