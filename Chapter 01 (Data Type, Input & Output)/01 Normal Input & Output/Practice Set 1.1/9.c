#include <stdio.h>

int main()
{
    int n_apple, p_apple;

    printf("Enter the number of apples you have in the basket and the weight of each apple: ");
    scanf("%d %d", &n_apple, &p_apple);

    printf("%lf\n", (n_apple * p_apple) / 1000.0);

    return 0;
}