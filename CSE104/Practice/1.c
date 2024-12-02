#include <stdio.h>


int num[2];


int findMax(int arr[]);
int findMin(int arr[]);

int main() {
    printf("Enter two numbers: ");
    for(int i = 0; i < 2; i++) {
        scanf("%d", &num[i]);
    }


    int max = findMax(num);
    int min = findMin(num);

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}


int findMax(int arr[]) {
    if (arr[0] > arr[1]) {
        return arr[0];
    } else {
        return arr[1];
    }
}


int findMin(int arr[]) {
    if (arr[0] < arr[1]) {
        return arr[0];
    } else {
        return arr[1];
    }
}
