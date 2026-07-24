#include <stdio.h>

int main() {
    int m1[3][3], m2[3][3], m3[3][3]; // Added missing semicolon
    int r, c;

    // Input for 1st Matrix
    printf("Enter elements of 1st matrix:\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            printf("Element [%d][%d]: ", r, c);
            scanf("%d", &m1[r][c]);
        } 
    }

    // Input for 2nd Matrix
    printf("\nEnter elements of 2nd matrix:\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            printf("Element [%d][%d]: ", r, c);
            scanf("%d", &m2[r][c]);
        } 
    }

    // Calculating addition and printing result
    printf("\nAddition of two matrices is:\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            m3[r][c] = m1[r][c] + m2[r][c];
            printf("%d\t", m3[r][c]); // Added \t for neat column alignment
        }
        printf("\n"); // Added missing semicolon
    }

    return 0;
}
