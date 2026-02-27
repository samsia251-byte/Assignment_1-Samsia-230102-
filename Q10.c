#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float price;
    float total = 0;

    while (1)
    {
        price = get_float("Enter product price (0 to stop): ");

        if (price == 0)
        {
            break;
        }

        total = total + price;
    }

    printf("Total bill before discount: %.2f\n", total);

    float discount;
    float final_bill;

    if (total > 2000)
    {
        discount = total * 0.15;
    }
    else
    {
        discount = total * 0.05;
    }

    final_bill = total - discount;

    printf("Discount amount: %.2f\n", discount);
    printf("Final bill after discount: %.2f\n", final_bill);

    return 0;
}
