#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, amount;
    int years = 5;

    printf("Enter Principal): ");
    scanf("%f", &principal);

    printf("Enter Rate: ");
    scanf("%f", &rate);


    for (int year = 1; year <= years; year++) {
        amount = principal * pow(1 + rate, year);
        printf("%d  %.2f\n", year, amount);
    }

    return 0;
}
