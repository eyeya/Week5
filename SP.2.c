#include <stdio.h>

int main() {
    int number, power;
    int result = 1;

    printf("number: ");
    scanf("%d", &number);

    printf("power: ");
    scanf("%d", &power);

    for (int i = 0; i < power; i++) {
        result *= number;
    }

    printf("%d power %d = %d\n", number, power, result);

    return 0;
}
