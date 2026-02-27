#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int pin;
    int correct_pin = 5555;
    int attempts = 3;

    for (int i = 1; i <= attempts; i++)
    {
        pin = get_int("Enter PIN: ");

        if (pin == correct_pin)
        {
            printf("Access Granted\n");
            return 0;
        }
        else
        {
            printf("Wrong PIN\n");
        }
    }
    printf("Account Locked\n");

    return 0;
}
