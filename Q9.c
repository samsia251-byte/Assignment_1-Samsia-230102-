#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number = get_int("Enter a number: ");

    int sum = 0;
    int odd_count = 0;
    
    if (number < 0)
    {
        number = -number;
    }
    while (number > 0)
    {
        int digit = number % 10;
        sum = sum + digit;

        if (digit % 2 != 0)
        {
            odd_count++;
        }

        number = number / 10;
    }
    printf("Sum of digits: %d\n", sum);
    printf("Number of odd digits: %d\n", odd_count);

    return 0;
}
