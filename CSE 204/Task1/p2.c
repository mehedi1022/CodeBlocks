#include <stdio.h>

// Function to check if all ratings are 5
int allFives(int ratings[], int n) {
    for (int i = 0; i < n; i++) {
        if (ratings[i] != 5) {
            return 0; // Found a rating that is not 5
        }
    }
    return 1; // All ratings are 5
}

// Function to check if there are 5 consecutive 5-star ratings
int hasFiveConsecutiveFives(int ratings[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (ratings[i] == 5) {
            count++;
            if (count == 5) {
                return 1; // Found 5 consecutive 5-star ratings
            }
        } else {
            count = 0; // Reset count if a different rating is found
        }
    }
    return 0;
}

int main() {
    int n;

    // Input number of orders
    printf("Enter the number of orders: ");
    scanf("%d", &n);

    int ratings[n];

    // Input ratings
    printf("Enter the ratings: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ratings[i]);
    }

    // Check if delivery hero is eligible (at least 10 orders)
    if (n < 10) {
        printf("NOT REWARDED\n");
        return 0;
    }

    // Check if all ratings are 5 -> ELIMINATED
    if (allFives(ratings, n)) {
        printf("ELIMINATED\n");
        return 0;
    }

    // Check if there are 5 consecutive 5-star ratings -> REWARDED
    if (hasFiveConsecutiveFives(ratings, n)) {
        printf("REWARDED\n");
    } else {
        printf("NOT REWARDED\n");
    }

    return 0;
}

