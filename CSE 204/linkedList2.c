#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

// Function to insert at beginning
void beginsert() {
    struct node *ptr;
    int item;
    ptr = (struct node*) malloc(sizeof(struct node));
    if(ptr == NULL) {
        printf("Memory not allocated\n");
        return;
    }
    printf("\nEnter value: ");
    scanf("%d", &item);
    ptr->data = item;
    ptr->next = head;
    head = ptr;
    printf("\nNode inserted at beginning\n");
}

// Function to insert at end
void endinsert() {
    struct node *ptr, *temp;
    int item;
    ptr = (struct node*) malloc(sizeof(struct node));
    if(ptr == NULL) {
        printf("Memory not allocated\n");
        return;
    }
    printf("\nEnter value: ");
    scanf("%d", &item);
    ptr->data = item;
    ptr->next = NULL;
    if(head == NULL) {
        head = ptr;
    } else {
        temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = ptr;
    }
    printf("\nNode inserted at end\n");
}

// Function to insert at specific index
void insertAtIndex() {
    int index, item, i;
    struct node *ptr, *temp;
    printf("\nEnter the index to insert at (starting from 0): ");
    scanf("%d", &index);
    if(index == 0) {
        beginsert();
        return;
    }
    temp = head;
    for(i = 0; i < index-1; i++) {
        if(temp == NULL) {
            printf("\nInvalid index\n");
            return;
        }
        temp = temp->next;
    }
    ptr = (struct node*) malloc(sizeof(struct node));
    if(ptr == NULL) {
        printf("Memory not allocated\n");
        return;
    }
    printf("\nEnter value: ");
    scanf("%d", &item);
    ptr->data = item;
    ptr->next = temp->next;
    temp->next = ptr;
    printf("\nNode inserted at index %d\n", index);
}

// Function to count nodes
int countNodes() {
    int count = 0;
    struct node *temp = head;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Function to insert at middle
void insert_at_middle() {
    int mid, item, i;
    struct node *ptr, *temp;
    int total = countNodes();
    if(total == 0) {
        printf("\nList is empty, inserting at beginning\n");
        beginsert();
        return;
    }
    mid = total/2 + 1;
    temp = head;
    for(i = 1; i < mid-1; i++) {
        temp = temp->next;
    }
    ptr = (struct node*) malloc(sizeof(struct node));
    if(ptr == NULL) {
        printf("Memory not allocated\n");
        return;
    }
    printf("\nEnter value: ");
    scanf("%d", &item);
    ptr->data = item;
    ptr->next = temp->next;
    temp->next = ptr;
    printf("\nNode inserted at middle\n");
}

// Function to delete from beginning
void deleteFromBeginning() {
    struct node *temp;
    if(head == NULL) {
        printf("\nList is empty\n");
        return;
    }
    temp = head;
    head = head->next;
    free(temp);
    printf("\nNode deleted from beginning\n");
}

// Function to delete from end
void deleteFromEnd() {
    struct node *temp, *prev;
    if(head == NULL) {
        printf("\nList is empty\n");
        return;
    }
    temp = head;
    if(temp->next == NULL) {
        free(temp);
        head = NULL;
        printf("\nOnly node deleted\n");
        return;
    }
    while(temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    free(temp);
    printf("\nNode deleted from end\n");
}

// Function to delete from specific position
void deleteFromPosition() {
    struct node *temp, *prev;
    int pos, i;
    printf("\nEnter position to delete (starting from 0): ");
    scanf("%d", &pos);
    if(head == NULL) {
        printf("\nList is empty\n");
        return;
    }
    if(pos == 0) {
        deleteFromBeginning();
        return;
    }
    temp = head;
    for(i = 0; i < pos; i++) {
        prev = temp;
        temp = temp->next;
        if(temp == NULL) {
            printf("\nInvalid position\n");
            return;
        }
    }
    prev->next = temp->next;
    free(temp);
    printf("\nNode deleted from position %d\n", pos);
}

// Function to delete from middle
void deleteFromMiddle() {
    int mid, i;
    struct node *temp, *prev;
    int total = countNodes();
    if(total == 0) {
        printf("\nList is empty\n");
        return;
    }
    mid = total/2;
    if(mid == 0) {
        deleteFromBeginning();
        return;
    }
    temp = head;
    for(i = 0; i < mid; i++) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    free(temp);
    printf("\nNode deleted from middle\n");
}

// Function to search by value
void searchByValue() {
    int item, pos = 0;
    struct node *temp = head;
    printf("\nEnter value to search: ");
    scanf("%d", &item);
    while(temp != NULL) {
        if(temp->data == item) {
            printf("\nValue %d found at position %d\n", item, pos);
            return;
        }
        pos++;
        temp = temp->next;
    }
    printf("\nValue not found\n");
}

// Function to search by position
void searchByPosition() {
    int pos, i;
    struct node *temp = head;
    printf("\nEnter position to search (starting from 0): ");
    scanf("%d", &pos);
    for(i = 0; i < pos; i++) {
        if(temp == NULL) {
            printf("\nInvalid position\n");
            return;
        }
        temp = temp->next;
    }
    if(temp != NULL) {
        printf("\nData: %d, Next Address: %p\n", temp->data, (void*)temp->next);
    } else {
        printf("\nInvalid position\n");
    }
}

// Function to convert to array
void linkedListToArray() {
    int n = countNodes(), i = 0;
    int arr[n];
    struct node *temp = head;
    while(temp != NULL) {
        arr[i++] = temp->data;
        temp = temp->next;
    }
    printf("\nLinked list converted to array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to make linked list circular
void makeCircular() {
    struct node *temp = head;
    if(temp == NULL) {
        printf("\nList is empty\n");
        return;
    }
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = head;
    printf("\nLinked list is now circular\n");
}

// Reverse traversal using recursion
void reverseTraversal(struct node *temp) {
    if(temp == NULL) return;
    reverseTraversal(temp->next);
    printf("%d -> ", temp->data);
}

// Pairwise swap
void pairwiseSwap() {
    struct node *temp = head;
    while(temp != NULL && temp->next != NULL) {
        int t = temp->data;
        temp->data = temp->next->data;
        temp->next->data = t;
        temp = temp->next->next;
    }
    printf("\nPairwise elements swapped\n");
}

// Function to display
void display() {
    struct node *ptr = head;
    if(ptr == NULL) {
        printf("\nList is empty\n");
        return;
    }
    printf("\nLinked List: ");
    while(ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    int choice;
    while(1) {
        printf("\nSingly linked list operations\n");
        printf("1. Insert at beginning\n2. Insert at end\n3. Insert at index\n4. Insert at middle\n5. Delete from beginning\n6. Delete from end\n7. Delete from position\n8. Delete from middle\n9. Search by value\n10. Search by position\n11. Convert to array\n12. Make Circular\n13. Reverse Traversal\n14. Pairwise Swap\n15. Display\n16. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: beginsert(); break;
            case 2: endinsert(); break;
            case 3: insertAtIndex(); break;
            case 4: insert_at_middle(); break;
            case 5: deleteFromBeginning(); break;
            case 6: deleteFromEnd(); break;
            case 7: deleteFromPosition(); break;
            case 8: deleteFromMiddle(); break;
            case 9: searchByValue(); break;
            case 10: searchByPosition(); break;
            case 11: linkedListToArray(); break;
            case 12: makeCircular(); break;
            case 13:
                printf("\nReverse Traversal: ");
                reverseTraversal(head);
                printf("NULL\n");
                break;
            case 14: pairwiseSwap(); break;
            case 15: display(); break;
            case 16: exit(0);
            default: printf("\nInvalid Choice\n");
        }
    }
    return 0;
}

