#include <stdio.h>

int main() {
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9, -6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int left = 0, right = n - 1;


    while (left < right) {

        while (arr[left] < 0) left++;

        while (arr[right] > 0) right--;


        if (left >= right) break;

        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
    }


    printf("Rearranged array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
