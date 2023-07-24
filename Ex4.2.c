#include <stdio.h>
#include <conio.h>

int main()
{
    char a, b, c;

    printf("Enter three characters: ");
    scanf("%c %c %c", &a, &b, &c);

    printf("[%c %c %c]\n", a, b, c);
    printf("[%c %c %c]\n", a, c, b);
    printf("[%c %c %c]\n", b, a, c);
    printf("[%c %c %c]\n", b, c, a);
    printf("[%c %c %c]\n", c, a, b);
    printf("[%c %c %c]\n", c, b, a);
    return (0);
}