#include <stdio.h>

int main() {
    int N;
    printf("Enter the size of the deque: ");
    scanf("%d", &N);

    int Deque[N];
    int Front = -1, Rear = -1;
    int choice, item, i;

    while(1) {
        printf("\n1. Insert at Front\n2. Insert at Rear\n");
        printf("3. Delete from Front\n4. Delete from Rear\n");
        printf("5. Display\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Insert at Front
                if ((Front == 0 && Rear == N - 1) || (Front == Rear + 1)) {
                    printf("Deque Overflow\n");
                }
                else {
                    printf("Enter item to insert at front: ");
                    scanf("%d", &item);

                    if (Front == -1) {
                        Front = 0;
                        Rear = 0;
                    }
                    else if (Front == 0) {
                        Front = N - 1;
                    }
                    else {
                        Front--;
                    }
                    Deque[Front] = item;
                }
                break;

            case 2: // Insert at Rear
                if ((Front == 0 && Rear == N - 1) || (Front == Rear + 1)) {
                    printf("Deque Overflow\n");
                }
                else {
                    printf("Enter item to insert at rear: ");
                    scanf("%d", &item);

                    if (Front == -1) {
                        Front = 0;
                        Rear = 0;
                    }
                    else if (Rear == N - 1) {
                        Rear = 0;
                    }
                    else {
                        Rear++;
                    }
                    Deque[Rear] = item;
                }
                break;

            case 3: // Delete from Front
                if (Front == -1) {
                    printf("Deque Underflow\n");
                }
                else {
                    item = Deque[Front];
                    printf("Deleted item from front: %d\n", item);

                    if (Front == Rear) {
                        Front = -1;
                        Rear = -1;
                    }
                    else if (Front == N - 1) {
                        Front = 0;
                    }
                    else {
                        Front++;
                    }
                }
                break;

            case 4: // Delete from Rear
                if (Front == -1) {
                    printf("Deque Underflow\n");
                }
                else {
                    item = Deque[Rear];
                    printf("Deleted item from rear: %d\n", item);

                    if (Front == Rear) {
                        Front = -1;
                        Rear = -1;
                    }
                    else if (Rear == 0) {
                        Rear = N - 1;
                    }
                    else {
                        Rear--;
                    }
                }
                break;

            case 5: // Display
                if (Front == -1) {
                    printf("Deque is empty\n");
                }
                else {
                    printf("Deque: ");
                    if (Front <= Rear) {
                        for (i = Front; i <= Rear; i++) {
                            printf("%d ", Deque[i]);
                        }
                    }
                    else {
                        for (i = Front; i < N; i++) {
                            printf("%d ", Deque[i]);
                        }
                        for (i = 0; i <= Rear; i++) {
                            printf("%d ", Deque[i]);
                        }
                    }
                    printf("\n");
                }
                break;

            case 6: // Exit
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
