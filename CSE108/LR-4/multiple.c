
#include <stdio.h>
int main() {
    int num1,num2,i,a,b;
    printf("enter two number's : \n");
    scanf("%d %d",&num1,&num2);
    a=num1;
    b=num2;
    for(i=1;;i++){
        if(num1>num2){
            num1=num1-num2;
        }
        else if(num1<num2){
            num2-=num1;
        }else{
            printf("%d is GCD\n",num1);
            break;
        }
    }
    printf("LCM is %d",(a*b)/num1);
    return 0;
}

