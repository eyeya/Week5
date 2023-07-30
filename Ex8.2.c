#include <stdio.h>

int main() {
    int sum = 0;
    int counter = 0;
    int number;

    do {
        printf("Enter : ");
        scanf("%d", &number);
        counter++;
        sum = sum+number;

    } while (number != 0);

    printf("Number: %d\n", sum);
}