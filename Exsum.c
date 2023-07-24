#include <stdio.h>
#include <stdlib.h>

void example1() {
  
    float miles, kilometers;

    printf("Enter the distance in miles: ");
    scanf("%f", &miles);

    kilometers = miles * 1.609;

    printf("The distance in kilometers is %.3f \n",miles );
    printf("The distance in kilometers is %.3f \n", kilometers);

    return 0;
}


    

int main() {
    example1();
    // example5();
    return (EXIT_SUCCESS);
}
