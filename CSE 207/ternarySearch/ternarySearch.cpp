#include <stdio.h>

// Ternary search function (recursive)
int ternarySearch(int A[], int l, int r, int key) {
    if (r >= l) {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;

        if (A[mid1] == key) return mid1;
        if (A[mid2] == key) return mid2;

        if (key < A[mid1])
            return ternarySearch(A, l, mid1 - 1, key);        // search in left segment
        else if (key > A[mid2])
            return ternarySearch(A, mid2 + 1, r, key);        // search in right segment
        else
            return ternarySearch(A, mid1 + 1, mid2 - 1, key); // search in middle segment
    }

    return -1; // key not found
}

int main() {
    int n, key;
    scanf("%d", &n);       // Size of array

    int A[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]); // Input array (must be sorted!)

    scanf("%d", &key);      // Element to search

    int index = ternarySearch(A, 0, n - 1, key);

    if (index != -1)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found\n");

    return 0;
}