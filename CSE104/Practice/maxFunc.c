#include <stdio.h>


void maximum (int num1, int num2){
int maxx;
if(num1 > num2){
    maxx = num1;
}else{
maxx = num2;
}
printf("%d is maximum", maxx);
}

int main(){
int num1, num2, max;

printf("Enter two numbers: ");
scanf("%d%d", &num1, &num2);
maximum(num1, num2);
return 0;
}
