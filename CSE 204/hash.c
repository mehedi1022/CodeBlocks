#include <stdio.h>
#include <stdlib.h>

int *hashTable = NULL;  // pointer to hash table
int size = 0;           // size of the hash table

void insertLinearProbing() {
    int x;
    printf("Enter Transaction ID to insert: ");
    scanf("%d", &x);

    int index = x % size;
    int start = index;

    while (hashTable[index] != -1) {
        index = (index + 1) % size;
        if (index == start) {
            printf("Hash table is full! Cannot insert %d\n", x);
            return;
        }
    }

    hashTable[index] = x;
    printf("Transaction ID %d inserted at index %d\n", x, index);
}

void displayTable() {
    printf("\nHash Table (Linear Probing):\n");
    for (int i = 0; i < size; i++) {
        if (hashTable[i] == -1)
            printf("Index %d: Empty\n", i);
        else
            printf("Index %d: %d\n", i, hashTable[i]);
    }
}

int main() {
    int choice;

    // Get size from user and initialize hash table
    printf("Enter hash table size: ");
    scanf("%d", &size);
    hashTable = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        hashTable[i] = -1;
    }

    // Menu-driven interface
    while (1) {
        printf("\n--- Hashing Menu ---\n");
        printf("1. Insert Transaction ID\n");
        printf("2. Display Hash Table\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            insertLinearProbing();
        } else if (choice == 2) {
            displayTable();
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice. Try again.\n");
        }
    }

    // Free memory
    free(hashTable);
    return 0;
}

