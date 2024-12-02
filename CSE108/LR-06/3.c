#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // Return index of key
        }
    }
    return -1;  // Return -1 if not found
}

int main() {
    int arr[] = {4, 2, 8, 6, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 6;

    printf("ID: 23201143\n");
    int result = linearSearch(arr, n, key);

    if (result != -1) {
        printf("Element %d found at index %d.\n", key, result);
    } else {
        printf("Element %d not found.\n", key);
    }

    return 0;
}

