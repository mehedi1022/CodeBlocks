#include <stdio.h>

int main() {
    int N1, N2;

    // Input for A1[]
    printf("Enter size of A1[]: ");
    scanf("%d", &N1);
    int A1[N1];
    printf("Enter %d elements for A1[]:\n", N1);
    for (int i = 0; i < N1; i++) {
        scanf("%d", &A1[i]);
    }

    // Bubble Sort on A1[]
    for (int i = 0; i < N1 - 1; i++) {
        for (int j = 0; j < N1 - i - 1; j++) {
            if (A1[j] > A1[j + 1]) {
                int temp = A1[j];
                A1[j] = A1[j + 1];
                A1[j + 1] = temp;
            }
        }
    }

    printf("\nAfter bubble sort A1[%d]:\n", N1);
    for (int i = 0; i < N1; i++) {
        printf("%d ", A1[i]);
    }
    printf("\n");

    // Input for A2[]
    printf("Enter size of A2[]: ");
    scanf("%d", &N2);
    int A2[N2];
    printf("Enter %d elements for A2[]:\n", N2);
    for (int i = 0; i < N2; i++) {
        scanf("%d", &A2[i]);
    }

    // Insertion Sort on A2[]
    for (int i = 1; i < N2; i++) {
        int temp2 = A2[i];
        int j = i - 1;
        while (j >= 0 && A2[j] > temp2) {
            A2[j + 1] = A2[j];
            j--;
        }
        A2[j + 1] = temp2;
    }

    printf("\nAfter insertion sort A2[%d]:\n", N2);
    for (int i = 0; i < N2; i++) {
        printf("%d ", A2[i]);
    }
    printf("\n");

    // Merge A1 and A2 into A[]
    int N = N1 + N2;
    int A[N];
    for (int i = 0; i < N1; i++) {
        A[i] = A1[i];
    }
    for (int i = 0; i < N2; i++) {
        A[N1 + i] = A2[i];
    }

    printf("\nAfter merging A1[] and A2[] into A[%d]:\n", N);
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Selection Sort on A[]
    for (int i = 0; i < N - 1; i++) {
        int min = i;
        for (int j = i + 1; j < N; j++) {
            if (A[j] < A[min]) {
                min = j;
            }
        }
        if (min != i) {
            int temp = A[i];
            A[i] = A[min];
            A[min] = temp;
        }
    }

    printf("\nAfter selection sort A[%d]:\n", N);
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Interpolation Search
    int key;
    printf("\nEnter the key to search: ");
    scanf("%d", &key);

    int low = 0, high = N - 1, pos, found = -1;

    while (low <= high && key >= A[low] && key <= A[high]) {
        if (A[high] == A[low]) {
            if (A[low] == key) {
                found = low;
            }
            break;
        }
        pos = low + ((double)(high - low) / (A[high] - A[low]) * (key - A[low]));

        if (A[pos] == key) {
            found = pos;
            break;
        } else if (A[pos] < key) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }

    if (found != -1) {
        printf("Using interpolation search, key = %d is found at index %d.\n", key, found);
    } else {
        printf("Using interpolation search, key = %d is not found in the array.\n", key);
    }

    return 0;
}
