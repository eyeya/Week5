#include <stdio.h>

int main()
{
    float miles, kilometers;

    printf("Enter the distance in miles: ");
    scanf("%f", &miles);

    kilometers = miles * 1.609;

    printf("The distance in kilometers is %.3f \n",miles );
    printf("The distance in kilometers is %.3f \n", kilometers);

    return 0;
}