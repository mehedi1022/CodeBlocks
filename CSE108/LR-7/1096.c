#include <stdio.h>

int main() {
    for (int i = 1; i <= 9; i += 2) {
        for (int k = 0; k < 3; k++) {
            int J = 7 - k;
            printf("I=%d J=%d\n", i, J);
        }
    }
    return 0;
}

