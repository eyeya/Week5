#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // สไลด์ ที่ 4 หน้าที่ 21
    // หาค่า รากที่สอง (square root) ของตัวเลขที่ 1 (first number)
    // หาค่า รากที่สอง (square root) ของตัวเลขที่ 2 (second number)
    // หาค่า รากที่สอง (square root) ของ ตัวเลขที่ 1+ตัวเลขที่ 2 (summation)

    // x รับค่า 36  y รับค่า  64
    // x1 y1 รับค่า ของ root
    // z รับค่า 36+64  sum รับค่าผลรวม ของz root;
    int x, y, x1, y1, z, sum;
    // input
    printf("Enter the first number :");
    scanf("%d", &x);
    printf("The square root of %d \n", x1 = sqrt(x));

    printf("Enter the first number :");
    scanf("%d", &y);
    printf("The square root of %d \n",  y1 = sqrt(y));
    
  //process
    z = x + y;
    sum = sqrt(z);

    printf("The square root of (%d+%d) = %d", x,y,sum);
}