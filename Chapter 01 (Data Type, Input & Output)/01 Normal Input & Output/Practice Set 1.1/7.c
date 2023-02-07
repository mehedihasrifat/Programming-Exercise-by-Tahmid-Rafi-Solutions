#include <stdio.h>

int main()
{
    int n, number_of_weeks;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Number of weeks: %d\n", (n / 7));

    return 0;
}