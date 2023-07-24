#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    //เขียนโปรแกรมคำนวณ หาค่า | x – y2 | เมื่อ x และ y เป็นจำนวนจริง
    //DECLARE
   float x,y,z;
    
    //INPUT
    printf("Enter a value for x:");
     scanf("%f",&x);
        printf("Enter a value for y:");
    scanf("%f",&y);
    
    //PROCESS
 z = fabs(x-(pow(y,2))); // libary ของการถอด ค่าสัมบูรณ์
 
    
    
    //OUTPUT
    printf("The result is  %.0f" , z);
    
    return (EXIT_SUCCESS);
}

