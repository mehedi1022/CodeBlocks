#include <stdio.h>

int main() {
    int K = 7;

    for (int i = 1; i <= 9; i += 2) {
        for (int j = 0; j < 3; j++) {
            int J = K - j;
            printf("I=%d J=%d\n", i, J);
        }
        K += 2;
    }

    return 0;
}

