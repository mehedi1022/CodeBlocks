#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void beg_insert() {
    struct node *ptr;
    int item;
    ptr = malloc(sizeof(struct node*));
    if (ptr == NULL) {
        printf("Memory not allocated\n");
        return;
    }
    printf("\nEnter value: ");
    scanf("%d", &item);
    ptr->data = item;
    ptr->next = head;
    head = ptr;
    printf("\nNode inserted at beginning");
}

void lastinsert() {
    struct node *ptr, *temp;
    int value;
    ptr = malloc(sizeof(struct node*));
    if (ptr == NULL) {
        printf("Memory not allocated\n");
        return;
    }
    printf("\nEnter value: ");
    scanf("%d", &value);
    ptr->data = value;
    ptr->next = NULL;

    if (head == NULL) {
        head = ptr;
    } else {
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = ptr;
    }
    printf("\nNode inserted at end");
}

void insertAtIndex() {
    struct node *ptr, *temp;
    int value, index;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("Memory not allocated\n");
        return;
    }

    printf("\nEnter index: ");
    scanf("%d", &index);
    printf("Enter value: ");
    scanf("%d", &value);
    ptr->data = value;

    temp = head;
    for (int i = 0; i < index - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Index out of range\n");
    } else {
        ptr->next = temp->next;
        temp->next = ptr;
        printf("\nNode inserted at index %d", index);
    }
}

void insertInMiddle() {
    int len = countNodes();
    int midIndex = len / 2;

    struct node *ptr, *temp;
    int item, i;

    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("Memory not allocated\n");
        return;
    }

    printf("\nEnter value to insert in the middle: ");
    scanf("%d", &item);
    ptr->data = item;

    temp = head;
    for (i = 0; i < midIndex - 1; i++) {
        temp = temp->next;
    }

    ptr->next = temp->next;
    temp->next = ptr;
    printf("Node inserted at middle index %d\n", midIndex);
}

int countNodes() {
    int count = 0;
    struct node *temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void display() {
    struct node *ptr;
    ptr = head;
    printf("\nPrinting values...\n");
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

// 1. Delete from the head
void deleteFromHead() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct node *temp = head;
    head = head->next;
    free(temp);
    printf("Node deleted from head.\n");
}

// 2. Delete from the end
void deleteFromEnd() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct node *temp = head;
    struct node *prev = NULL;
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    if (prev != NULL) {
        prev->next = NULL;
    } else {
        head = NULL; // If only one node exists
    }
    free(temp);
    printf("Node deleted from end.\n");
}

// 3. Delete from any specific location (ask user for position)
void deleteAtPosition() {
    int position;
    printf("Enter the position to delete: ");
    scanf("%d", &position);

    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct node *temp = head;
    if (position == 1) {
        head = temp->next;
        free(temp);
        printf("Node deleted at position %d\n", position);
        return;
    }

    for (int i = 0; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("Position is out of range.\n");
        return;
    }

    struct node *next = temp->next->next;
    free(temp->next);
    temp->next = next;
    printf("Node deleted at position %d\n", position);
}

// 4. Delete a node from the middle position
void deleteFromMiddle() {
    int len = countNodes();
    if (len == 0) {
        printf("List is empty.\n");
        return;
    }
    int midIndex = len / 2;

    struct node *temp = head;
    for (int i = 0; i < midIndex - 1; i++) {
        temp = temp->next;
    }

    struct node *midNode = temp->next;
    temp->next = midNode->next;
    free(midNode);
    printf("Node deleted from middle.\n");
}

// 5. Count the total number of nodes
void counNodes() {
    int count = 0;
    struct node *temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    printf("Total number of nodes: %d\n", count);
}


// 6. Search a node by value
void searchByValue() {
    int value;
    printf("Enter the value to search: ");
    scanf("%d", &value);

    struct node *temp = head;
    while (temp != NULL) {
        if (temp->data == value) {
            printf("Node with value %d found.\n", value);
            return;
        }
        temp = temp->next;
    }
    printf("Node with value %d not found.\n", value);
}

// 7. Search a node by position
void searchByPosition() {
    int position;
    printf("Enter the position to search: ");
    scanf("%d", &position);

    struct node *temp = head;
    for (int i = 1; i < position && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range.\n");
    } else {
        printf("Node at position %d is %d.\n", position, temp->data);
    }
}

// 8. Convert a singly linked list to an array and return it
void convertToArray() {
    int len = countNodes();
    int arr[len];
    struct node *temp = head;
    for (int i = 0; i < len; i++) {
        arr[i] = temp->data;
        temp = temp->next;
    }

    printf("Array: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 9. Convert the singly linked list to a circular singly linked list
void convertToCircular() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = head;  // Make the list circular
    printf("Converted to circular linked list.\n");
}

// 10. Traverse the linked list in reverse order
void reverseTraversal(struct node *head) {
    if (head == NULL) return;
    reverseTraversal(head->next);
    printf("%d -> ", head->data);
}

void displayReverse() {
    printf("Reverse Traversal: ");
    reverseTraversal(head);
    printf("NULL\n");
}

int main() {
    int ch = 0;
    while (1) {
        printf("\nLinked list operations");
        printf("\n1. Insert at beginning");
        printf("\n2. Insert at end");
        printf("\n3. Insert at specific index");
        printf("\n4. Insert in middle");
        printf("\n5. Show");
        printf("\n6. Delete from head");
        printf("\n7. Delete from end");
        printf("\n8. Delete from specific position");
        printf("\n9. Delete from middle");
        printf("\n10. Count nodes");
        printf("\n11. Search node by value");
        printf("\n12. Search node by position");
        printf("\n13. Convert to array");
        printf("\n14. Convert to circular linked list");
        printf("\n15. Reverse traversal");
        printf("\n16. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
        case 1:
            beg_insert();
            break;
        case 2:
            lastinsert();
            break;
        case 3:
            insertAtIndex();
            break;
        case 4:
            insertInMiddle();
            break;
        case 5:
            display();
            break;
        case 6:
            deleteFromHead();
            break;
        case 7:
            deleteFromEnd();
            break;
        case 8:
            deleteAtPosition();
            break;
        case 9:
            deleteFromMiddle();
            break;
       case 10:
            counNodes();
            break;
        case 11:
            searchByValue();
            break;
        case 12:
            searchByPosition();
            break;
        case 13:
            convertToArray();
            break;
        case 14:
            convertToCircular();
            break;
        case 15:
            displayReverse();
            break;
        case 16:
            exit(0);
        default:
            printf("Invalid choice, please try again.\n");
        }
    }
    return 0;
}
