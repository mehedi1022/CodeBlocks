#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, d;


    printf("Enter four integers a, b, c, d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    float powerAB = pow(a, b);
    float powerCD = pow(c, d);


    if (powerAB > powerCD) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
