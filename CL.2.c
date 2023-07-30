#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of times multiplication table (not more than 10): ");
    scanf("%d", &n);

    if (n <= 10) {
      
        printf("   ");
        for (int i = 1; i <= n; i++) {
            printf("%4d", i);
        }
        printf("\n");

        for (int i = 1; i <= n; i++) {
            printf("%2d ", i);
            for (int j = 1; j <= n; j++) {
                printf("%4d", i * j);
            }
            printf("\n");
        }
    } else 

    return 0;
}
