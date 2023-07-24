#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // เขียนโปรแกรมปัดเศษทศนิยม (จำนวนเต็มบวก) โดยให้ปัดลง (rounded down) ทุกกรณี
    // แสดงรูปแบบก่อนปัดเศษเป็น ทศนิยม 4 ตำแหน่ง
    // แสดงรูปแบบหลังปัดเศษเป็น จำนวนเต็ม
    float a, b;
    printf("Enter three numbers :");
    scanf("%f", &a);
    printf("The round up of %.4f is %.0f \n",a,floor(a)); //ใช้ floor เป็น ไลบารี่ในการปัดเศษลง
    printf("Enter three numbers :");
    scanf("%f", &b);
    printf("The round up of %.4f is  %.0f\n", b,floor(b)); //ใช้ floor เป็น ไลบารี่ในการปัดเศษลง

    return (EXIT_SUCCESS);
}
