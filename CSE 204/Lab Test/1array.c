// Array Tasks Without Using malloc, stdlib.h or pointers
#include <stdio.h>

// Task A: Static array of size 15 and take inputs
void staticArrayInputPrint() {
    int arr[15];
    printf("Enter 15 integers:\n");
    for (int i = 0; i < 15; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Static array values are: ");
    for (int i = 0; i < 15; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Task B: Simulated dynamic input using VLA
void dynamicInputPrint() {
    int n;
    printf("Enter number of integers: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("You entered: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 1. Print array in reverse order
void reverseArray() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Reversed array: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 2. Insert value at specific index
void insertElement() {
    int n, index, value;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter index to insert at: ");
    scanf("%d", &index);
    printf("Enter value to insert: ");
    scanf("%d", &value);
    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    n++;
    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 3. Delete value at specific index
void deleteElement() {
    int n, index;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter index to delete: ");
    scanf("%d", &index);
    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 4. Update value at specific index
void updateElement() {
    int n, index, value;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter index to update: ");
    scanf("%d", &index);
    printf("Enter new value: ");
    scanf("%d", &value);
    if (index >= 0 && index < n) {
        arr[index] = value;
    }
    printf("Array after update: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 5. Merge two arrays
void mergeTwoArrays() {
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int a1[n1];
    printf("Enter %d elements of first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a1[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int a2[n2];
    printf("Enter %d elements of second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &a2[i]);
    }
    int merged[n1 + n2];
    for (int i = 0; i < n1; i++) {
        merged[i] = a1[i];
    }
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = a2[i];
    }
    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
}

// 6. Split array into two arrays
void splitArray() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int mid = n / 2 + 1;
    int n1 = mid;
    int n2 = n - mid;
    int a1[n1], a2[n2];
    for (int i = 0; i < n1; i++) {
        a1[i] = arr[i];
    }
    for (int i = 0; i < n2; i++) {
        a2[i] = arr[mid + i];
    }
    printf("First half: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", a1[i]);
    }
    printf("\nSecond half: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", a2[i]);
    }
    printf("\n");
}

int main() {
    int choice;
    while (1) {
        printf("\nArray Tasks Menu:\n");
        printf("1. Static Array Input & Print\n");
        printf("2. Dynamic Input & Print\n");
        printf("3. Reverse Array\n");
        printf("4. Insert Element\n");
        printf("5. Delete Element\n");
        printf("6. Update Element\n");
        printf("7. Merge Arrays\n");
        printf("8. Split Array\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: staticArrayInputPrint(); break;
            case 2: dynamicInputPrint(); break;
            case 3: reverseArray(); break;
            case 4: insertElement(); break;
            case 5: deleteElement(); break;
            case 6: updateElement(); break;
            case 7: mergeTwoArrays(); break;
            case 8: splitArray(); break;
            case 9: return 0;
            default: printf("Invalid choice. Try again.\n");
        }
    }
}
