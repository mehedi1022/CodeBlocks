#include <stdio.h>

int main() {
    int arr[] = {2, 4, 7, 10, 15, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 10;
    int left = 0, right = n - 1;
    int mid;
    int found = 0;

    while (left <= right) {
        mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            found = 1;
            break; // Key found, exit loop
        } else if (arr[mid] < key) {
            left = mid + 1; // Search right half
        } else {
            right = mid - 1; // Search left half
        }
    }

    if (found) {
        printf("Element %d found at index %d\n", key, mid);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}