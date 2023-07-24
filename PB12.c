#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // เขียนโปรแกรมคำนวณ หาค่า a + bc + e2 เมื่อ a, b และ c เป็นจำนวนจริง และ e = 2.71828.
    // DECLARE
    float a, b, c, e, sum1;

    // INPUT
    printf("Enter a value for a:");
    scanf("%f", &a);
    printf("Enter a value for b:");
    scanf("%f", &b);
    printf("Enter a value for c:");
    scanf("%f", &c);

    // PROCESS
    e = 2.71828 ;
    sum1 = (a + pow(b,c))+pow(e,2); // ใช้ libary เข้ามาช่วยในการถอดยกกำลัง
    printf("The result is %.4f", sum1); //.4 ให้เหลือทศนิยม 3 ตำแหน่ง
    // OUTPUT

    return (EXIT_SUCCESS);
}
