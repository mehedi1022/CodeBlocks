#include <stdio.h>

// Function to sort array using Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Input number of rickshaw pullers
    printf("Enter the number of rickshaw pullers: ");
    scanf("%d", &n);

    int fares[n];

    // Input fares
    printf("Enter the fares: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &fares[i]);
    }

    // Finding the minimum fare
    int minFare = fares[0];
    for (int i = 1; i < n; i++) {
        if (fares[i] < minFare) {
            minFare = fares[i];
        }
    }

    // Sorting the fares
    bubbleSort(fares, n);

    // Printing the results
    printf("%d\n", minFare);
    for (int i = 0; i < n; i++) {
        printf("%d ", fares[i]);
    }

    return 0;
}

