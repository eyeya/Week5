#include <stdio.h>

int main() {
    int count;

    printf("Enter the number : ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        printf("Hello World!\n");
    }

    return 0;
}