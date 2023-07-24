#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // เขียนโปรแกรมปัดเศษทศนิยม (จำนวนเต็มบวก) ให้เหลือ 2 ตำแหน่ง
    // แสดงรูปแบบก่อนปัดเศษเป็น ทศนิยม 4 ตำแหน่ง
    // แสดงรูปแบบหลังปัดเศษเป็น ทศนิยม 2 ตำแหน่ง
    float a, b;
    printf("Enter a numbers :");
    scanf("%f", &a);
    printf("The round up of %.4f is %.2f \n", a,a); 

    printf("Enter a numbers :");
    scanf("%f", &b);
    printf("The round up of %.4f is  %.2f \n", b,b); 

    return (EXIT_SUCCESS);
}
