#include<stdio.h>

int main() {
    int no[8] = {10, 10, 20, 20, 30, 40, 50, 60};
    int i, j, size = 8;

    for(i = 0; i < size; i++) {
        printf("%d\t", no[i]);
    }

    printf("\nDuplicate Element in Array : \n");

    int foundDuplicate = 0;
    for(i = 0; i < size; i++) {
        for(j = i + 1; j < size; j++) {
            if(no[i] == no[j]) {
                printf("%d\n", no[i]);
                foundDuplicate = 1;
            }
        }
    }

    if (foundDuplicate == 0) {
        printf("No duplicate elements found.\n");
    }

    return 0;
}
