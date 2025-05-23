#include <stdio.h>

int main() {
    int size, front = -1, rear = -1, option, item;

    printf("Enter the size of queue: \n");
    scanf("%d", &size);
    int queue[size];

    while (1) {
        printf("\n1. Enqueue \n");
        printf("2. Dequeue\n");
        printf("3. Check empty queue\n");
        printf("4. Check full queue\n");
        printf("0. Exit\n");

        scanf("%d", &option);

        if (option == 1) {  // Enqueue
            if (rear == size - 1) {
                printf("Overflow\n");
            } else {
                printf("Enter value to Enqueue: \n");
                scanf("%d", &item);
                if (front == -1) front = 0;  // Set front for first element
                rear++;
                queue[rear] = item;
            }

            // Print queue
            printf("The queue: \n");
            for (int i = front; i <= rear; i++) {
                printf("%d\n", queue[i]);
            }
        }

        else if (option == 2) {  // Dequeue
            if (front == -1 || front > rear) {
                printf("Underflow\n");
            } else {
                printf("Removed: %d\n", queue[front]);
                front++;
                if (front > rear) front = rear = -1;  // Reset queue when empty
            }

            // Print queue
            printf("The queue: \n");
            for (int i = front; i <= rear; i++) {
                printf("%d\n", queue[i]);
            }
        }

        else if (option == 3) {  // Check if queue is empty
            printf("Queue empty status: %s\n", (front == -1 || front > rear) ? "True" : "False");
        }

        else if (option == 4) {  // Check if queue is full
            printf("Queue Full Status: %s\n", (rear == size - 1) ? "True" : "False");
        }

        else if (option == 0) {  // Exit
            printf("Exiting...\n");
            return 0;
        }

        else {
            printf("Invalid Option\n");
        }
    }

    return 0;
}
