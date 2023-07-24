#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // DECLARE
    float  depth; //ความลึก 
    float  f,c; //หน่วยเซลเซียส (C) และฟาเรนไฮต์ (F)

    // INPUT
    printf("Enter :");
    scanf("%f", &depth);

    // PROCESS Celsius = 10 x (Depth) + 20 Fahrenheit = 1.8 x (Celsius) + 32
    c = 10*(depth)+20;
    f =  1.8 * (c) + 32;

    // OUTPUT
    printf("Tem in C: %.2f \n", c);
    printf("Tem in F: %.2f", f);
}

