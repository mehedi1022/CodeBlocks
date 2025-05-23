#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Function to insert at beginning
void insertAtBeginning() {
    int value;
    printf("Enter value to insert: ");
    scanf("%d", &value);

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    printf("Inserted %d at beginning\n", value);
}

// Function to insert at end
void insertAtEnd() {
    int value;
    printf("Enter value to insert: ");
    scanf("%d", &value);

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    printf("Inserted %d at end\n", value);
}

// Function to insert at specific position
void insertAtPosition() {
    int pos, value;
    printf("Enter position: ");
    scanf("%d", &pos);
    printf("Enter value: ");
    scanf("%d", &value);

    if (pos == 1) {
        insertAtBeginning();
        return;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    struct Node* temp = head;
    for (int i = 1; i < pos-1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    printf("Inserted %d at position %d\n", value, pos);
}

// Function to count nodes
int countNodes() {
    int count = 0;
    struct Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Function to insert at middle
void insertAtMiddle() {
    int count = countNodes();
    int middle = count/2 + 1;
    printf("Middle position is %d\n", middle);
    insertAtPosition();
}

// Function to delete from beginning
void deleteFromBeginning() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;
    head = head->next;
    printf("Deleted %d from beginning\n", temp->data);
    free(temp);
}

// Function to delete from end
void deleteFromEnd() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (head->next == NULL) {
        printf("Deleted %d from end\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    struct Node* temp = head;
    struct Node* prev = NULL;

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
    printf("Deleted %d from end\n", temp->data);
    free(temp);
}

// Function to delete from specific position
void deleteFromPosition() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    int pos;
    printf("Enter position to delete: ");
    scanf("%d", &pos);

    if (pos == 1) {
        deleteFromBeginning();
        return;
    }

    struct Node* temp = head;
    struct Node* prev = NULL;

    for (int i = 1; i < pos && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position\n");
        return;
    }

    prev->next = temp->next;
    printf("Deleted %d from position %d\n", temp->data, pos);
    free(temp);
}

// Function to delete from middle
void deleteFromMiddle() {
    int count = countNodes();
    int middle = count/2 + 1;
    printf("Middle position is %d\n", middle);

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (middle == 1) {
        deleteFromBeginning();
        return;
    }

    struct Node* temp = head;
    struct Node* prev = NULL;

    for (int i = 1; i < middle; i++) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = temp->next;
    printf("Deleted %d from middle position %d\n", temp->data, middle);
    free(temp);
}

// Function to search by value
void searchByValue() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    int value, pos = 1, found = 0;
    printf("Enter value to search: ");
    scanf("%d", &value);

    struct Node* temp = head;
    while (temp != NULL) {
        if (temp->data == value) {
            printf("Value %d found at position %d\n", value, pos);
            found = 1;
        }
        pos++;
        temp = temp->next;
    }

    if (!found) {
        printf("Value not found in list\n");
    }
}

// Function to search by position
void searchByPosition() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    int pos;
    printf("Enter position: ");
    scanf("%d", &pos);

    struct Node* temp = head;
    for (int i = 1; i < pos && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position\n");
    } else {
        printf("At position %d: Data = %d\n", pos, temp->data);
    }
}

// Function to convert list to array
void listToArray() {
    int count = countNodes();
    if (count == 0) {
        printf("List is empty\n");
        return;
    }

    int arr[count];
    struct Node* temp = head;

    for (int i = 0; i < count; i++) {
        arr[i] = temp->data;
        temp = temp->next;
    }

    printf("Array: [");
    for (int i = 0; i < count; i++) {
        printf("%d", arr[i]);
        if (i < count-1) printf(", ");
    }
    printf("]\n");
}

// Function to make list circular
void makeCircular() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = head;
    printf("List is now circular\n");
}

// Helper function for reverse display
void reverseDisplayHelper(struct Node* node) {
    if (node == NULL) return;
    reverseDisplayHelper(node->next);
    printf("%d->", node->data);
}

// Function to display in reverse order
void reverseDisplay() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("List in reverse: ");
    reverseDisplayHelper(head);
    printf("NULL\n");
}

// Function to swap elements pairwise
void swapPairwise() {
    if (head == NULL || head->next == NULL) {
        printf("List has less than 2 elements\n");
        return;
    }

    struct Node* temp = head;
    while (temp != NULL && temp->next != NULL) {
        int t = temp->data;
        temp->data = temp->next->data;
        temp->next->data = t;
        temp = temp->next->next;
    }
    printf("Elements swapped pairwise\n");
}

// Function to display the list
void display() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to display circular list
void displayCircular() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;
    printf("Circular List: ");
    do {
        printf("%d->", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("HEAD\n");
}

int main() {
    int choice;

    while (1) {
        printf("\nSingly Linked List Operations\n");
        printf("1. Insert at beginning\n2. Insert at end\n3. Insert at position\n");
        printf("4. Insert at middle\n5. Count nodes\n6. Delete from beginning\n");
        printf("7. Delete from end\n8. Delete from position\n9. Delete from middle\n");
        printf("10. Search by value\n11. Search by position\n12. Convert to array\n");
        printf("13. Make circular\n14. Display reverse\n15. Swap pairwise\n");
        printf("16. Display\n17. Display circular\n18. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insertAtBeginning(); break;
            case 2: insertAtEnd(); break;
            case 3: insertAtPosition(); break;
            case 4: insertAtMiddle(); break;
            case 5: printf("Total nodes: %d\n", countNodes()); break;
            case 6: deleteFromBeginning(); break;
            case 7: deleteFromEnd(); break;
            case 8: deleteFromPosition(); break;
            case 9: deleteFromMiddle(); break;
            case 10: searchByValue(); break;
            case 11: searchByPosition(); break;
            case 12: listToArray(); break;
            case 13: makeCircular(); break;
            case 14: reverseDisplay(); break;
            case 15: swapPairwise(); display(); break;
            case 16: display(); break;
            case 17: displayCircular(); break;
            case 18: exit(0);
            default: printf("Invalid choice\n");
        }
    }

    return 0;
}
