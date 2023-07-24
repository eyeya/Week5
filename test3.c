#include <stdio.h>
#include <stdlib.h>

void example4() {
    //Example 4 
    int var2;
    printf("Enter a value : ");
    scanf("%d", &var2);
    printf("The value is : %d\n\n", var2);
}

void example5() {
    //Example 5 
    int first, second, sum;
    printf("Enter first number : ");
    scanf("%d", &first);
    printf("Enter second number : ");
    scanf("%d", &second);
    sum = first + second;
    printf("Result of %d + %d = %d \n\n", first, second, sum);
}





int main(int argc, char** argv) {
    example4();
    example5();
  
    return (EXIT_SUCCESS);
}
