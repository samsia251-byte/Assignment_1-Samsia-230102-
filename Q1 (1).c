#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int battery = get_int("Enter battery percentage: ");
    int charger = get_int("Is charger connected? (1 = Yes, 0 = No): ");

    if (battery < 20 && charger == 0)
    {
        printf("Connect charger immediately\n");
    }
    else if (battery >= 20 && battery <= 80)
    {
        printf("Battery level normal\n");
    }
    else if (battery > 80 && charger == 1)
    {
        printf("Unplug charger to save battery health\n");
    }

    else
    {
        printf("Battery status okay\n");
    }

    return 0;
}
