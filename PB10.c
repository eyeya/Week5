#include <stdio.h>
#include <math.h>

int main()
{
    int root1, root2, a, b, c;
    printf("Entera value for ");
    scanf("%d", &a);
    printf("Entera value for");
    scanf("%d", &b);
    printf("Entera value for");
    scanf("%d", &c);
    root1 = ((-b) + (sqrt((pow(b, 2) - (4 * a * c))))) / (2 * a);
    root2 = ((-b) - (sqrt((pow(b, 2) - (4 * a * c))))) / (2 * a);

    printf("%d and %d", root1, root2);
}
