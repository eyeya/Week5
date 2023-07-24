#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // DECLARE
    float amount, rate; // amount จำนวนเงินฝาก rate อัตราดอกเบี้ยต่อปี
    float a, b, c;      // a ดอกเบี้ยปีแรก b ดอกเบี้ยปีถัดไป

    // INPUT
    printf("Input amount :");
    scanf("%f", &amount);
    printf("Yearly interest rate  :");
    scanf("%f", &rate);

    // PROCESS
    a = (amount * rate) / 100;
    b = (amount + a) * (rate / 100);
    c = (amount + a + b) * (rate / 100);

    // OUTPUT
    printf("Interest (Year 1): %.4f \n", a);
    printf("Interest (Year 2): %.4f \n", b);
    printf("Interest (Year 3): %.4f", c);
}
