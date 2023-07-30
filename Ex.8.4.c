#include <stdio.h>

int main() {
    int first, second;

    printf("Enter two numbers: ");
   scanf("%d %d", &first, &second );
    for (int index = first+ 1; index < second; index++) {
        printf("%d ", index);
    }

    printf("\n");

    return 0;
}
