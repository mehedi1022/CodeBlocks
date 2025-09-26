#include <stdio.h>

#define MAX 100

int temp[MAX]; // Temporary array for merging

void merge(int A[], int l, int mid, int h) {
    int i = l;
    int j = mid + 1;
    int k = l;

    // Merge the two sorted halves into temp[]
    while (i <= mid && j <= h) {
        if (A[i] <= A[j]) {
            temp[k] = A[i];
            i++;
        } else {
            temp[k] = A[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements from left half
    while (i <= mid) {
        temp[k] = A[i];
        i++;
        k++;
    }

    // Copy remaining elements from right half
    while (j <= h) {
        temp[k] = A[j];
        j++;
        k++;
    }

    // Copy merged elements back into original array
    for (k = l; k <= h; k++) {
        A[k] = temp[k];
    }
}

void mergesort(int A[], int l, int h) {
    if (l < h) {
        int mid = (l + h) / 2;

        mergesort(A, l, mid);       // Sort left half
        mergesort(A, mid + 1, h);   // Sort right half
        merge(A, l, mid, h);        // Merge the two halves
    }
}

int main() {
    int A[MAX], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    mergesort(A, 0, n - 1);

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}