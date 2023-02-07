#include <stdio.h>

int main()
{
    char *weeks[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    for (int i = 0; i < 7; i++)
    {
        printf("%s\n", weeks[i]);
    }

    return 0;
}