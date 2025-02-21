#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

  /*  if (n < 2) {
        printf("Array must have at least two elements to find the second largest.\n");
        return 0;
    }
*/
    int arr[n];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN, secondLargest = INT_MIN;

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("No second largest element found.\n");
    } else {
        printf("Second largest element: %d\n", secondLargest);
    }

    return 0;
}
