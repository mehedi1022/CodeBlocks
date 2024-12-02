#include <stdio.h>
int main(){

//a[5] = 2 1 3 4 5 ----> 1 2 3 4 5
int a[5],i,j,temp;
printf("Enter array Elements: ");
for(i = 0; i < 5; i++){

    scanf("%d",&a[i]);
}
for(i = 0; i < 5; i++){
    for(j = i + 1; j < 5; j++){
        if(a[i] > a[j]){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
}
printf("Array Element: ");
for(i = 0; i < 5; i++){
    printf("%d ", a[i]);
}

return 0;
}
