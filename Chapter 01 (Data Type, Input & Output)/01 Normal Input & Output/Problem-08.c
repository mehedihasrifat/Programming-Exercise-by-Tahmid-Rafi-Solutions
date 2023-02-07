#include <stdio.h>

int main()
{
    int taka, total = 0;

    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &taka);
        total += taka;
    }

    printf("Total money raised: %d\n", total);

    return 0;
}