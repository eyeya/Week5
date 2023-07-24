#include <stdio.h>

int main() {
    int num, sum = 0;

    do {
        printf("Enter an integer (enter 0 to end): ");
        scanf("%d", &num);
        sum += num;
    } while (num != 0);

    printf("The sum of all input numbers is: %d\n", sum);

    return 0;
}