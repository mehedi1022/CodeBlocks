#include <stdio.h>

int binary(int a[], int data, int n){

int l = 0, r = n - 1, mid;

while(l <= r ){

mid = (l + r)/2;

if(data == a[mid]){
    return mid;
}
else if(data > a[mid]){
    l = mid + 1;
}
else{
    r = mid - 1;
}

}
return -1;

}

int main(){

int i, n, data;

printf("Enter the size of element: \n");
scanf("%d", &n);
int a[n];
printf("Enter the element of array: \n");
for(i = 0; i < n; i++){
    scanf("%d", &a[i]);
}

printf("Enter data: \n");
scanf("%d", &data);
int pos = binary(a, data, n);

if(pos != -1){
    printf("Number of index: %d", pos);
}else{
printf("Number is not available");
}

return 0;
}
