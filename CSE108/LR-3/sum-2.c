
#include <stdio.h>

int main() {
    int N;
    float sum = 0.0;


    printf("Enter a natural number N: ");
    scanf("%d", &N);


    for (int i = 1; i <= N; i++) {
        sum += 1.0 / i;
    }

    // Output the result
    printf("The sum of the series up to %d is: %.6f\n", N, sum);

    return 0;
}
