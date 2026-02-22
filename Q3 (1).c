#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int age = get_int("Enter your age: ");
    int day = get_int("Enter day type (1 = weekend, 0 = weekday): ");

    int ticket_price;

    if (age < 10)
    {
        ticket_price = 60;
    }
    else
    {
        if (age >= 10 && age <= 25)
        {
            if (day == 0)
            {
                ticket_price = 100;
            }
            else
            {
                ticket_price = 120;
            }
        }
        else
        {
            if (day == 0)
            {
                ticket_price = 140;
            }
            else
            {
                ticket_price = 160;
            }
        }
    }
    printf("Your ticket price is: %d\n", ticket_price);

    return 0;
}
