#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("input: ");
    scanf("%d", &number);

    while (number != 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("sum: %d\n", sum);

    return 0;
}
