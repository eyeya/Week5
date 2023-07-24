
#include <stdio.h>
#include <math.h>

int main() {
    float n , result;
    //รับค่า
    printf("Enter a positive integer (n): ");
    scanf("%f", &n);
// log10(x);
result = log10(n);
printf("log10(%.4f)= %.7f \n",n,result);

result = log10(n+1);
printf("log10(%.4f) = %.7f \n",n+1,result); 

result = log10(n+2);
printf("log10(%.4f)= %.7f \n",n+2,result);

result = log10(n+3);
printf("log10(%.4f) = %.7f \n",n+3,result);

return 0;

}