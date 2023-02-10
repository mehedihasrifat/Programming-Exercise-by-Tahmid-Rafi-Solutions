#include <stdio.h>

int main()
{
    int friends, plums, left;

    printf("Enter the number of friends and plums you have: ");
    scanf("%d %d", &friends, &plums);

    left = (plums - friends);

    if (left < 0)
    {
        printf("Left Plums: %d\n", 0);
    }
    else
    {
        printf("Left Plums: %d\n", left);
    }

    return 0;
}