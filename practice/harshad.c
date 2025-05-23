#include <stdio.h>

int main() {
    int N;
    printf("Enter the size of the queue: ");
    scanf("%d", &N);

    int queue[N];
    int front = -1, rear = -1;
    int option, item, i;

    while(1) {
        printf("\n\nType..\n1 to Enqueue\n2 to Dequeue\n3 to check if the Queue is Empty\n4 to check the Queue is Full\n0 to exit\n");
        scanf("%d", &option);

        if(option == 1) {
            // Enqueue operation
            if(rear == N - 1) {
                printf("Overflow: Queue is full\n");
            } else {
                if(front == -1) {
                    front = 0; // Initialize front when first element is added
                }
                printf("Enter value to enqueue: ");
                scanf("%d", &item);
                rear++;
                queue[rear] = item;
            }

            // Print queue
            printf("Queue: [");
            for(i = front; i <= rear && i != -1; i++) {
                printf("%d", queue[i]);
                if(i < rear) printf(", ");
            }
            printf("]");
        }
        else if(option == 2) {
            // Dequeue operation
            if(front == -1 || front > rear) {
                printf("Underflow: Queue is empty\n");
            } else {
                queue[front] = 0; // Clearing the value (optional)
                front++;
                if(front > rear) {
                    // Reset pointers when queue becomes empty
                    front = -1;
                    rear = -1;
                }
            }

            // Print queue
            printf("Queue: [");
            for(i = front; i <= rear && i != -1; i++) {
                printf("%d", queue[i]);
                if(i < rear) printf(", ");
            }
            printf("]");
        }
        else if(option == 3) {
            // Check if empty
            if(front == -1 || front > rear) {
                printf("Queue is empty (1)\n");
            } else {
                printf("Queue is not empty (0)\n");
            }
        }
        else if(option == 4) {
            // Check if full
            if(rear == N - 1) {
                printf("Queue is full (1)\n");
            } else {
                printf("Queue is not full (0)\n");
            }
        }
        else if(option == 0) {
            return 0;
        }
        else {
            printf("Invalid input.\n");
        }
    }

    return 0;
}