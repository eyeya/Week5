#include <stdio.h>
#include <math.h>
int main()
{
    // DECLARE
    float  c;
    float  f;

    // INPUT
    printf("Enter a temperature F  : ");
    scanf("%f", &f);

    // PROCESS
    c = (f - 32) / 1.8;98.60

    // OUTPUT
    printf("Temperature in F : %.2f \n", f);
    printf("Temperature in C : %.2f", c);
}
