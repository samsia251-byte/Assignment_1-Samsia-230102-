#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float hours;
    float total = 0;
    int below_two = 0;

    for (int i = 1; i <= 7; i++)
    {
        hours = get_float("Enter study hours for day %d: ", i);
        total = total + hours;

        if (hours < 2)
        {
            below_two++;
        }
    }
    float average = total / 7;
    
    printf("Total study hours: %.2f\n", total);
    printf("Average study hours: %.2f\n", average);
    printf("Days below 2 hours: %d\n", below_two);

    return 0;
}
