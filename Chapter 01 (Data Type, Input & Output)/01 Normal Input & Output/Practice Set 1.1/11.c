#include <stdio.h>

int main()
{
    int friends, plums;

    printf("Enter the number of friends you have: ");
    scanf("%d", &friends);

    printf("Enter the number of plums you have: ");
    scanf("%d", &plums);

    printf("Each friend will get: %d plum(s)\n", (plums / friends));

    return 0;
}