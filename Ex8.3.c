#include <stdio.h>

int main()
{
    int number;
    int factorial = 1;
    int index = 1;

    printf(" factorial :");
    scanf("%d", &number);

    for (index = 1; index <= number; index++)
    {
        factorial = factorial * index;
    }
    printf("%d ! is %d", number, factorial);
    return 0;
}