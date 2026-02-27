#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int booked = 0;
    int empty = 0;
    int status;

    for (int i = 1; i <= 40; i++)
    {
        status = get_int("Seat %d (1 = booked, 0 = empty): ", i);

        if (status == 1)
        {
            booked++;
        }
        else if (status == 0)
        {
            empty++;
        }
        else
        {
            printf("Invalid input. Please enter 1 or 0.\n");
            i--;
            continue;
        }
        if (booked == 40)
        {
            break;
        }
    }
    printf("Total booked seats: %d\n", booked);
    printf("Total empty seats: %d\n", empty);

    return 0;
}
