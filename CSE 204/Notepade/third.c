#include <stdio.h>

int main() {
    int size, rear = -1, front = -1, item, option;

    printf("Enter the size of the Queue: ");
    scanf("%d", &size);
    int queue[size];

    while (1) {
        printf("\nChoose an option:\n");
        printf("1 to Enqueue\n");
        printf("2 to Dequeue\n");
        printf("3 to Check if the Queue is empty\n");
        printf("4 to Check if the Queue is full\n");
        printf("0 to Exit\n");

        scanf("%d", &option);

        if (option == 1) {  // Enqueue
            if (rear == size - 1) {
                printf("\nOverflow! Queue is full.\n");
            } else {
                printf("\nEnter value to enqueue: ");
                scanf("%d", &item);

                if (front == -1) { 
                    front = 0;  // Set front for first element
                }
                
                rear++;
                queue[rear] = item;
            }

            // Print queue
            printf("\nThe Queue: ");
            for (int i = front; i <= rear; i++) {
                printf("%d ", queue[i]);
            }
            printf("\n");
        } 
        
        else if (option == 2) {  // Dequeue
            if (front == -1 || front > rear) {
                printf("\nUnderflow! Queue is empty.\n");
            } else {
                //printf("\nDequeued: %d\n", queue[front]);
                front++;  // Move front forward
            }

            // Print queue
             printf("\nThe Queue: \n");
            for(int i=front+1; i<=rear; i++){
                printf("%d\n", queue[i]);
            }
            printf("\n");
        } 
        
        else if (option == 3) {  // Check if Queue is Empty
            printf("\nQueue EMPTY status: ");
            if (front == -1 || front > rear) { 
                printf("TRUE\n");
            } else { 
                printf("FALSE\n");
            }
        } 
        
        else if (option == 4) {  // Check if Queue is Full
            printf("\nQueue FULL status: ");
            if (rear == size - 1) { 
                printf("TRUE\n");
            } else { 
                printf("FALSE\n");
            }
        } 
        
        else if (option == 0) {  // Exit
            printf("\nExiting...\n");
            return 0;
        } 
        
        else { 
            printf("Invalid option! Try again.\n");
        }
    }

    return 0;
}
