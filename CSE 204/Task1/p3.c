#include <stdio.h>

// Function to sort the array in descending order (Selection Sort)
void sortDescending(int arr[], int n) {
    int i, j, maxIdx, temp;
    for (i = 0; i < n - 1; i++) {
        maxIdx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIdx]) {
                maxIdx = j;
            }
        }
        // Swap elements
        temp = arr[i];
        arr[i] = arr[maxIdx];
        arr[maxIdx] = temp;
    }
}

// Function to find the magic number
int findMagicNumber(int arr[], int n, int magic) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == magic) {
            return i + 1;  // Page number (1-based index)
        }
    }
    return -1; // Not found
}

int main() {
    int n, magic;

    // Input number of items
    printf("Enter the number of items: ");
    scanf("%d", &n);

    int arr[n];

    // Input the numbers
    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the magic number to search
    printf("Enter the magic number: ");
    scanf("%d", &magic);

    // Sort array in descending order
    sortDescending(arr, n);

    // Find the magic number
    int page = findMagicNumber(arr, n, magic);

    // Print the result
    if (page != -1) {
        printf("MAGIC found at page no %d.\n", page);
    } else {
        printf("BETTER LUCK NEXT TIME!\n");
    }

    return 0;
}

