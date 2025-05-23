#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void beginsert() {
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter value: ");
    scanf("%d", &item);
    ptr->data = item;
    ptr->next = head;
    head = ptr;
    printf("\nNode inserted at beginning\n");
}

void endinsert() {
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter value: ");
    scanf("%d", &item);
    ptr->data = item;
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
    printf("\nNode inserted at end\n");
}

void insert_at_pos() {
    struct node *ptr, *temp;
    int item, pos, i;
    printf("\nEnter position: ");
    scanf("%d", &pos);
    printf("Enter value: ");
    scanf("%d", &item);

    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = item;

    if (pos == 1) {
        ptr->next = head;
        head = ptr;
        return;
    }

    temp = head;
    for (i = 1; i < pos-1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("\nPosition out of range\n");
        free(ptr);
        return;
    }

    ptr->next = temp->next;
    temp->next = ptr;
    printf("\nNode inserted at position %d\n", pos);
}

int count_nodes() {
    int count = 0;
    struct node *temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void insert_at_middle() {
    int count = count_nodes();
    int middle = count/2 + 1;
    insert_at_pos();
}

void delete_begin() {
    if (head == NULL) {
        printf("\nList is empty\n");
        return;
    }
    struct node *temp = head;
    head = head->next;
    printf("\nDeleted node with value: %d\n", temp->data);
    free(temp);
}

void delete_end() {
    if (head == NULL) {
        printf("\nList is empty\n");
        return;
    }

    struct node *temp = head, *prev;
    if (head->next == NULL) {
        printf("\nDeleted node with value: %d\n", head->data);
        free(head);
        head = NULL;
        return;
    }

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    printf("\nDeleted node with value: %d\n", temp->data);
    free(temp);
}

void delete_at_pos() {
    int pos, i;
    printf("\nEnter position to delete: ");
    scanf("%d", &pos);

    if (head == NULL) {
        printf("\nList is empty\n");
        return;
    }

    struct node *temp = head, *prev;
    if (pos == 1) {
        head = head->next;
        printf("\nDeleted node with value: %d\n", temp->data);
        free(temp);
        return;
    }

    for (i = 1; temp != NULL && i < pos; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("\nPosition out of range\n");
        return;
    }

    prev->next = temp->next;
    printf("\nDeleted node with value: %d\n", temp->data);
    free(temp);
}

void delete_at_middle() {
    int count = count_nodes();
    int middle = count/2 + 1;
    printf("\nDeleting node at middle position %d\n", middle);
    delete_at_pos();
}

void search_by_value() {
    int value, pos = 1, found = 0;
    printf("\nEnter value to search: ");
    scanf("%d", &value);

    struct node *temp = head;
    while (temp != NULL) {
        if (temp->data == value) {
            printf("\nValue %d found at position %d\n", value, pos);
            found = 1;
            break;
        }
        pos++;
        temp = temp->next;
    }

    if (!found) {
        printf("\nValue not found in list\n");
    }
}

void search_by_pos() {
    int pos, i;
    printf("\nEnter position: ");
    scanf("%d", &pos);

    struct node *temp = head;
    for (i = 1; temp != NULL && i < pos; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("\nPosition out of range\n");
    } else {
        printf("\nAt position %d: Data = %d, Next = %p\n",
               pos, temp->data, (void *)temp->next);
    }
}

int* list_to_array() {
    int count = count_nodes();
    int *arr = (int *)malloc(count * sizeof(int));
    struct node *temp = head;

    for (int i = 0; i < count; i++) {
        arr[i] = temp->data;
        temp = temp->next;
    }

    printf("\nConverted list to array: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return arr;
}

void make_circular() {
    if (head == NULL) {
        printf("\nList is empty\n");
        return;
    }

    struct node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = head;
    printf("\nList converted to circular\n");
}

void reverse_traverse(struct node *temp) {
    if (temp == NULL) return;
    reverse_traverse(temp->next);
    printf("%d->", temp->data);
}

void reverse_display() {
    printf("\nList in reverse order: ");
    reverse_traverse(head);
    printf("NULL\n");
}

void swap_pairwise() {
    struct node *temp = head;
    while (temp != NULL && temp->next != NULL) {
        int t = temp->data;
        temp->data = temp->next->data;
        temp->next->data = t;
        temp = temp->next->next;
    }
    printf("\nList after pairwise swap\n");
}

void display() {
    struct node *ptr = head;
    printf("\nList: ");
    while (ptr != NULL) {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

void display_circular() {
    if (head == NULL) {
        printf("\nList is empty\n");
        return;
    }

    struct node *temp = head;
    printf("\nCircular List: ");
    do {
        printf("%d->", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("HEAD\n");
}

int main() {
    int choice = 0;
    while (1) {
        printf("\n\nSingly Linked List Operations\n");
        printf("1. Insert at beginning\n2. Insert at end\n3. Insert at position\n");
        printf("4. Insert at middle\n5. Count nodes\n6. Delete from beginning\n");
        printf("7. Delete from end\n8. Delete from position\n9. Delete from middle\n");
        printf("10. Search by value\n11. Search by position\n12. Convert to array\n");
        printf("13. Make circular\n14. Display reverse\n15. Swap pairwise\n");
        printf("16. Display\n17. Display circular\n18. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: beginsert(); break;
            case 2: endinsert(); break;
            case 3: insert_at_pos(); break;
            case 4: insert_at_middle(); break;
            case 5: printf("\nTotal nodes: %d\n", count_nodes()); break;
            case 6: delete_begin(); break;
            case 7: delete_end(); break;
            case 8: delete_at_pos(); break;
            case 9: delete_at_middle(); break;
            case 10: search_by_value(); break;
            case 11: search_by_pos(); break;
            case 12: list_to_array(); break;
            case 13: make_circular(); break;
            case 14: reverse_display(); break;
            case 15: swap_pairwise(); display(); break;
            case 16: display(); break;
            case 17: display_circular(); break;
            case 18: exit(0);
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}
