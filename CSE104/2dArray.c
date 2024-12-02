#include <stdio.h>

int main() {
    int i, j, a[2][2], b[2][2];

    // Reading elements of both matrices with specific prompts
    printf("Enter the elements of both matrices (2x2):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Matrix A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Matrix B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Printing the resulting sum matrix
    printf("Sum of the matrices:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", a[i][j] + b[i][j]); // Sum directly in the print statement
        }
        printf("\n"); // New line after each row
    }

    return 0;
}
