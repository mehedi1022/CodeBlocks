#include <stdio.h>

// Global declarations as per your request
int A1[100], A2[100];
int n, mid;

// Function to perform linear search on A1[]
void linearSearch() {
    int key1;
    printf("Enter key1 for linear search on A1[]: ");
    scanf("%d", &key1);

    for (int i = 0; i < mid; i++) {
        if (A1[i] == key1) {
            printf("Using linear search %d (key1) is found in index %d\n", key1, i);
            return;
        }
    }
    printf("Using linear search %d (key1) is not found in the list\n", key1);
}

// Function to perform binary search on A2[]
void binarySearch() {
    int key2;
    printf("Enter key2 for binary search on A2[]: ");
    scanf("%d", &key2);

    int low = 0, high = n - mid - 1;

    while (low <= high) {
        int middle = (low + high) / 2;
        if (A2[middle] == key2) {
            printf("Using binary search %d (key2) is found in index %d\n", key2, middle);
            return;
        } else if (A2[middle] < key2) {
            low = middle + 1;
        } else {
            high = middle - 1;
        }
    }

    printf("Using binary search %d (key2) is not found in the list\n", key2);
}

// Function to handle splitting and calling search functions
void splitAndSearch() {
    printf("Enter size of array (N): ");
    scanf("%d", &n);

    int A[n];
    printf("Enter %d sorted integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    mid = (n + 1) / 2;

    for (int i = 0; i < mid; i++) {
        A1[i] = A[i];
    }
    for (int i = 0; i < n - mid; i++) {
        A2[i] = A[mid + i];
    }

    printf("A1[%d] =\n", mid);
    for (int i = 0; i < mid; i++) {
        printf("%d ", A1[i]);
    }
    printf("\n");

    printf("A2[%d] =\n", n - mid);
    for (int i = 0; i < n - mid; i++) {
        printf("%d ", A2[i]);
    }
    printf("\n");

    linearSearch();
    binarySearch();
}

int main() {
    splitAndSearch();
    return 0;
}
