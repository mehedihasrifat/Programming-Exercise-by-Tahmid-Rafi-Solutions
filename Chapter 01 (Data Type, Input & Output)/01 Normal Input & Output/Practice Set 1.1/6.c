#include <stdio.h>

int main()
{
    int e, d;

    printf("How many eggs have you bought?: ");
    scanf("%d", &e);

    printf("How many eggs got broken?: ");
    scanf("%d", &d);

    printf("Left eggs: %d\n", (e - d));

    return 0;
}