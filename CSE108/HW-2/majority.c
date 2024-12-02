#include <stdio.h>

int main() {
    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int el = 0;
    int count = 0;


    for (int i = 0; i < size; i++) {
        if (count == 0) {
            el = arr[i];
        }
        if (el == arr[i]) {
            count++;
        } else {
            count--;
        }
    }


    count = 0;
    for (int i = 0; i < size; i++) {
        if (el == arr[i]) {
            count++;
        }
    }


    if (count > size / 2) {
        printf("Majority Element: %d\n", el);
    } else {
        printf("No Majority Element\n");
    }

    return 0;
}
