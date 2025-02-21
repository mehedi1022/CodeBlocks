//C Program to Find Factorial of a Number
int main(){

int num, i, fact = 1;
printf("Enter a number: ");
scanf("%d", &num);


if (num < 0)
        printf("Factorial of a negative number is not defined.\n");
    else {
    for(i = 1; i <= num; i++){
    fact = fact * i;
    }
    printf("Factorial of %d is: %d", num, fact);
   }

return 0;
}
