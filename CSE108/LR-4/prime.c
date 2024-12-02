#include <stdio.h>
int main() {
    int i,num,k=1;
    printf("Enter a number : ");
    scanf("%d",&num);
    if (num%2!=0){
        for(i=k+2;i<=num/2;i++){
            if(num%i==0){
                k=1;
                break;
            }
            else{
                k=0;
            }
        }
        if(k==1){
            printf("The number is not prime");
        }else{
            printf("The number is prime");
        }
    } else{
        if(num==2){
            printf("The number is prime");
        }else{
            printf("The number is not prime");
        }
    }
    return 0;
}

