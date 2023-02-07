#include <stdio.h>

int main()
{
    int each_pen, total_pens, total_price;

    printf("Enter the price of a Pen: ");
    scanf("%d", &each_pen);

    printf("Enter the number of Pens you want to buy: ");
    scanf("%d", &total_pens);

    total_price = (each_pen * total_pens);

    printf("The total price: %d tk\n", total_price);

    return 0;
}