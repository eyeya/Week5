
#include <stdio.h>
//  เขียนโปรแกรมที่แสดงข้อความ “Hello World!” ออกทางหน้าจอ ตามจำนวนครั้ง (times) ที่ผู้ใช้งานป้อน (แนะนำให้ใช้ for)
int main() {
    int times;
   
    printf("How many times to print :");
    scanf("%d", &times);

    for ( int counter = 0; counter < times; counter++) {
        printf("Hello World!\n");
        
    }

    return 0;
}