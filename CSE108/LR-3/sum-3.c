#include <stdio.h>

int main() {
   float n, i, sum = 0;
   printf("Enter the value fo n: ");
   scanf("%f", &n);

   for(i = 1; i <= n; i = i + 2){
    sum = sum + (1 / i);
   }
printf("Sum of series: %f\n", sum);
    return 0;
}
