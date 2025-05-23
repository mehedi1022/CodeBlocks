#include <stdio.h>

int main() {
    int N;

    // Task A: Create sorted array
    printf("Enter the size of array A (N): ");
    scanf("%d", &N);

    int A[N];
    printf("Enter %d integers in sorted order:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Task B: Split array into A1 and A2
    int split_point = N / 2;
    int A1[split_point], A2[N - split_point];

    for (int i = 0; i < split_point; i++) {
        A1[i] = A[i];
    }
    for (int i = 0; i < N - split_point; i++) {
        A2[i] = A[split_point + i];
    }

    printf("\nArray A1 (first half): ");
    for (int i = 0; i < split_point; i++) {
        printf("%d ", A1[i]);
    }

    printf("\nArray A2 (second half): ");
    for (int i = 0; i < N - split_point; i++) {
        printf("%d ", A2[i]);
    }
    printf("\n");

    // Get search keys from user
    int key1, key2;
    printf("\nEnter key1 to search in A1 (linear search): ");
    scanf("%d", &key1);
    printf("Enter key2 to search in A2 (binary search): ");
    scanf("%d", &key2);

    // Linear Search on A1
    int found1 = -1;
    for (int i = 0; i < split_point; i++) {
        if (A1[i] == key1) {
            found1 = i;
            break;
        }
    }

    if (found1 != -1) {
        printf("Key1 (%d) found in A1 at index %d\n", key1, found1);
    } else {
        printf("Key1 (%d) not found in A1\n", key1);
    }

    // Binary Search on A2
    int left = 0, right = N - split_point - 1, found2 = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (A2[mid] == key2) {
            found2 = mid;
            break;
        } else if (A2[mid] < key2) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (found2 != -1) {
        printf("Key2 (%d) found in A2 at index %d\n", key2, found2);
    } else {
        printf("Key2 (%d) not found in A2\n", key2);
    }

    return 0;
}

