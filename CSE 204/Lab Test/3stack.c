#include <stdio.h>

int main() {
    int N;
    printf("Enter the size of the stack: ");
    scanf("%d", &N);

    int stack[N];
    int top = -1;
    int option, push, i;

    while(1) {
        printf("\n\nType..\n1 to push\n2 to pop\n3 to check if the stack is Empty\n4 to check the stack is Full\n5 to get Size\n6 to get Top element\n7 to Peek at a position\n0 to exit\n");
        scanf("%d", &option);

        if(option == 1) {
            // Push operation
            if(top == N - 1) {
                printf("Overflow\n");
            } else {
                printf("Enter value to push: ");
                scanf("%d", &push);
                top++;
                stack[top] = push;
            }

            // Print stack
            printf("Stack: [");
            for(i = 0; i <= top; i++) {
                printf("%d", stack[i]);
                if(i < top) printf(", ");
            }
            printf("]");
        }
        else if(option == 2) {
            // Pop operation
            if(top == -1) {
                printf("Underflow\n");
            } else {
                stack[top] = 0; // Clearing the value (optional)
                top--;
            }

            // Print stack
            printf("Stack: [");
            for(i = 0; i <= top; i++) {
                printf("%d", stack[i]);
                if(i < top) printf(", ");
            }
            printf("]");
        }
        else if(option == 3) {
            // Check if empty
            if(top == -1) {
                printf("Stack is empty (1)\n");
            } else {
                printf("Stack is not empty (0)\n");
            }
        }
        else if(option == 4) {
            // Check if full
            if(top == N - 1) {
                printf("Stack is full (1)\n");
            } else {
                printf("Stack is not full (0)\n");
            }
        }
        else if(option == 5) {
            // Size
            printf("Current stack size: %d\n", top + 1);
        }
        else if(option == 6) {
            // Top
            if(top == -1) {
                printf("Stack is empty, no top element\n");
            } else {
                printf("Top element: %d\n", stack[top]);
            }
        }
        else if(option == 7) {
            // Peek
            int pos;
            printf("Enter position to peek (0-%d): ", top);
            scanf("%d", &pos);
            if(pos < 0 || pos > top) {
                printf("Invalid position\n");
            } else {
                printf("Element at position %d: %d\n", pos, stack[pos]);
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
