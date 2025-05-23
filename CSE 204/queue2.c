#include <stdio.h>

int front = -1, rear = -1, n;  // Front, rear, and queue size
int queue[100]; // Define queue with a maximum limit

// Function to insert (enqueue) an element into the queue
void enqueue() {
    if (rear == n - 1) {
        printf("Queue Overflow\n");
    } else {
        int x;
        printf("Enter value to insert: ");
        scanf("%d", &x);
        if (front == -1) front = 0;  // Set front to 0 for first element
        rear++;
        queue[rear] = x;
        printf("Inserted: %d\n", x);
    }
}

// Function to remove (dequeue) an element from the queue
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Removed: %d\n", queue[front]);
        front++;
        if (front > rear) front = rear = -1;  // Reset queue when empty
    }
}

// Function to display the queue elements
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

// Main function
int main() {
    printf("Enter the size of the queue: ");
    scanf("%d", &n);

    int choice;
    while (1) {
        printf("\nChoose an operation:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
