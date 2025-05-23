#include <stdio.h>

int main() {
    int N;
    printf("Enter the size of the circular queue: ");
    scanf("%d", &N);

    int CQueue[N];
    int Front = 0, Rear = 0;
    int choice, item, i;

    while(1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Enqueue
                if ((Front == 1 && Rear == N) || (Rear + 1 == Front)) {
                    printf("Circular Queue Overflow\n");
                }
                else {
                    printf("Enter item to enqueue: ");
                    scanf("%d", &item);

                    if (Front == 0 && Rear == 0) {
                        Front = 1;
                        Rear = 1;
                    }
                    else if (Rear == N) {
                        Rear = 1;
                    }
                    else {
                        Rear++;
                    }
                    CQueue[Rear] = item;
                }
                break;

            case 2: // Dequeue
                if (Front == 0) {
                    printf("Circular Queue Underflow\n");
                }
                else {
                    item = CQueue[Front];
                    printf("Dequeued item: %d\n", item);

                    if (Front == Rear) {
                        Front = 0;
                        Rear = 0;
                    }
                    else if (Front == N) {
                        Front = 1;
                    }
                    else {
                        Front++;
                    }
                }
                break;

            case 3: // Display
                if (Front == 0) {
                    printf("Queue is empty\n");
                }
                else {
                    printf("Circular Queue: ");
                    if (Front <= Rear) {
                        for (i = Front; i <= Rear; i++) {
                            printf("%d ", CQueue[i]);
                        }
                    }
                    else {
                        for (i = Front; i <= N; i++) {
                            printf("%d ", CQueue[i]);
                        }
                        for (i = 1; i <= Rear; i++) {
                            printf("%d ", CQueue[i]);
                        }
                    }
                    printf("\n");
                }
                break;

            case 4: // Exit
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
