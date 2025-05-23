#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* rear = NULL;

void enqueue(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if (rear == NULL) {
        rear = newNode;
        rear->next = rear;
    } else {
        newNode->next = rear->next;
        rear->next = newNode;
        rear = newNode;
    }
    printf("Enqueued %d to circular queue\n", value);
}

void dequeue() {
    if (rear == NULL) {
        printf("Circular Queue Underflow\n");
        return;
    }

    struct Node* temp = rear->next;
    printf("Dequeued %d from circular queue\n", temp->data);

    if (rear->next == rear) {
        rear = NULL;
    } else {
        rear->next = temp->next;
    }
    free(temp);
}

void display() {
    if (rear == NULL) {
        printf("Circular Queue is empty\n");
        return;
    }

    struct Node* temp = rear->next;
    printf("Circular Queue: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != rear->next);
    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\nCircular Queue Operations:\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
