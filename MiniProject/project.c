// Pattern Generator
#include <stdio.h>

int main() {
    int choice, n, i, j;
    char shapes[4][20] = {"Right Triangle", "Pyramid", "Inverted Pyramid", "Diamond"};

    for (i = 0; i < 4; i++)
        printf("%d. %s\n", i + 1, shapes[i]);

    printf("Enter choice: ");
    scanf("%d", &choice);
    printf("Enter size: ");
    scanf("%d", &n);

    if (choice == 1) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= i; j++)
                printf("* ");
            printf("\n");
        }
    }
    else if (choice == 2) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n - i; j++)
                printf(" ");
            for (j = 1; j <= 2 * i - 1; j++)
                printf("*");
            printf("\n");
        }
    }
    else if (choice == 3) {
        for (i = n; i >= 1; i--) {
            for (j = 1; j <= n - i; j++)
                printf(" ");
            for (j = 1; j <= 2 * i - 1; j++)
                printf("*");
            printf("\n");
        }
    }
    else if (choice == 4) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n - i; j++)
                printf(" ");
            for (j = 1; j <= 2 * i - 1; j++)
                printf("*");
            printf("\n");
        }
        for (i = n - 1; i >= 1; i--) {
            for (j = 1; j <= n - i; j++)
                printf(" ");
            for (j = 1; j <= 2 * i - 1; j++)
                printf("*");
            printf("\n");
        }
    }
    else
        printf("Invalid choice\n");

    return 0;
}
