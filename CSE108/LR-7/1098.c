#include <stdio.h>
#include <math.h>

int main() {
    float i = 0.0, j = 1.0;

    while (i <= 2.0) {
        for (int a = 0; a < 3; a++) {
            if (fabs(i - (int)i) > 1e-6) {
                printf("I=%.1f J=%.1f\n", i, j);
            } else {  // i is an integer
                printf("I=%.0f J=%.0f\n", i, j);
            }
            j += 1.0;
        }
        i = round((i + 0.2) * 10) / 10;
        j = round((j - 2.8) * 10) / 10;
    }

    return 0;
}

