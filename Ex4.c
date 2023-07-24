#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // เขียนโปรแกรมปัดเศษทศนิยม (จำนวนเต็มบวก) จำนวน 3 ค่า โดยให้ปัดขึ้น (round up)ทุกกรณี
    // แสดงรูปแบบก่อนปัดเศษเป็น ทศนิยม 4 ตำแหน่ง
    // แสดงรูปแบบหลังปัดเศษเป็น จำนวนเต็ม
    float a, b,c;
    printf("Enter three numbers :");
    scanf("%f %f %f", &a,&b,&c);
    printf("The round up of %.4f is %.0f \n", a, ceil(a)); // ใช้ ceil เป็น ไลบารี่ในการปัดเศษขึ้น
    printf("The round up of %.4f is  %.0f\n", b, ceil(b)); // ใช้ ceilเป็น ไลบารี่ในการปัดเศษขึ้น
    printf("The round up of %.4f is  %.0f\n", c, ceil(c)); // ใช้ ceil เป็น ไลบารี่ในการปัดเศษขึ้น
    return (EXIT_SUCCESS);
}
