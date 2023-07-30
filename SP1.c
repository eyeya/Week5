#include <stdio.h>

int main()
{
    int first, second;

    printf("Enter two numbers: ");
    scanf("%d", &first);
    printf("Enter two numbers: ");
    scanf("%d", &second);
    for (int index = first + 0; index <= second; index++)
    {
        printf(" Number : %d ", index);
    }

    printf("\n");

    return 0;
}