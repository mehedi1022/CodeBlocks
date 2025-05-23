#include <stdio.h>
int main(){

int size, front = -1, rear = -1, option,item;

printf("Enter the size of queue: \n");
scanf("%d", &size);
int queue[size];

while(1){
printf("1. Enqueue \n");
printf("2. Dequeue\n");
printf("3. Check empty queue\n");
printf("4. Check full queue\n");
printf("0. Exit\n");

scanf("%d", &option);

if(option == 1){
if(rear == size - 1){
printf("Overflow\n");
}else{
printf("Enter value to Enqueue: \n");
scanf("%d", &item);
rear++;
queue[rear] = item;
}
printf("The queue: \n");
for(int i = front + 1; i <= rear; i++){
printf("%d\n", queue[i]);
}
}
else if(option == 2){
if(front == size-1){
printf("Underflow\n");
}
else{
front++;
//queue[front] = NULL;
}
printf("The queue: \n");
for(int i= front+1; i<= rear; i++){
printf("%d\n", queue[i]);
}
}
else if(option == 3){
printf("Queue empty status: \n");
if(rear == front){
printf("True");
}
else{
printf("False");
}
}
else if(option == 4){
printf("Queue Full Status: \n");
if(rear == size-1){
printf("True\n");
}else{
printf("False\n");
}
}
else if(option == 0){
printf("Exiting...");
return 0;
}
else printf("Invalid Option");
}


return 0;
}