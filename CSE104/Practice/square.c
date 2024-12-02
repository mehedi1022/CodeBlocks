#include <stdio.h>
int main(){
int num1, num2, maxx;

printf("Enter two numbers: ");
scanf("%d%d", &num1, &num2);

if(num1 > num2){
    maxx = num1;
}else{
maxx = num2;
}

printf("%d is maximum.", maxx);

return 0;
}
