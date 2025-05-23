#include <stdio.h>
int main ()
{
    int n;
    printf("Enter Size: ");
    scanf("%d", &n);
    int stack[n];
    int top = -1, option, push;
        while(1)
        {
        printf("\nType...\n");
        printf("1 to Push\n");
        printf("2 to pop\n");
        printf("3 to check if the stack is Empty\n");
        printf("4 to check the stack is Full\n");
        printf("5 to check the size of the Stack\n");
        printf("6 to check the top index of the Stack\n");
        printf("7 to peek the top value of the Stack\n");
        printf("0 to exit\n\n");

        scanf("%d", &option);
        if(option==1)
        {
            if(top==n-1){
                printf("\nOverflow\n");
            }
            else{
                printf("Push: ");
                scanf("%d", &push);

                top++;

                stack[top]=push;

            }

            printf("\nThe Stack:\n");
            for(int i=0; i<=top; i++){
                printf("%d\n", stack[i]);
            }
        }
        else if(option==2)
        {
            if(top==-1){
                printf("\nUnderflow\n");
            }
            else{
                stack[top]=0;
                top--;
            }
            printf("\nThe Stack:\n");
            for(int i=0; i<=top; i++){
                printf("%d\n", stack[i]);
            }
        }
        else if(option==3)
        {
            if(top==-1){
                printf("\nTrue(1)\n");
            }
            else{
                printf("\nFalse(0)\n");
            }
        }
        else if(option==4)
        {
            if(top!=-1){
                printf("\nTrue(1)\n");
            }
            else{
                printf("\nFalse(0)\n");
            }
        }
        else if(option==5)
        {
            if(top==-1){
                printf("Size: &d\n", top+1);
            }
            else{
                printf("Size: %d\n", top+1);
            }
        }
        else if(option==6)
        {
            if(top!=-1){
                printf("\nThe top index is: %d\n", top);
            }
            else{
                printf("\nStack is non-existence\n");
            }
        }
        else if(option==7)
        {
            if(top!=1){
                printf("\nPeeking into the top of the stack: %d\n", stack[top]);
            }
        }
        else if(option==0)
        {
            return 0;
        }

        else printf("\nInvalid input.\n");
    }
    return 0;
}
