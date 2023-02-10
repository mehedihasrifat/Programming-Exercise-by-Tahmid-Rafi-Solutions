#include <stdio.h>

int main()
{
    int w;

    printf("Enter the number of weeks: ");
    scanf("%d", &w);

    printf("The number of episodes had shown is: %d\n", (3 * w));

    return 0;
}