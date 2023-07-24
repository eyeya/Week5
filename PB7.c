#include <stdio.h>
#include <math.h>
int main()
{
    int l1, l2, w1, w2;
    int g, s;
    printf("Enter the length of a yard:");
    scanf("%d", &l1);
    printf("Enter the width of a yard:");
    scanf("%d", &w1);
    printf("Enter the length of a house:");
    scanf("%d", &l2);
    printf("Enter the width of a house:");
    scanf("%d", &w2);

    // process
    g = (l1 * w1) - (l2 * w2);
    s = g / 2;

    // output
    printf("The time required is %d seconds", s);
}
