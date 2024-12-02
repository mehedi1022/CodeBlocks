#include<stdio.h>
int main(){

int n,s,i,j;
scanf("%d",&s);
scanf("%d",&n);
int a[n];
printf("give the element of array ");
for(int i=0;i<n;i++){

    scanf("%d",&a[i]);
}
for(int i=0;i<n;i++){

for(int j=i+1;j<n;j++){
 if(a[i]+a[j]==s){
        printf("%d %d ",a[i],a[j]);
    }
break;
}
printf("\n");
}


return 0;

}
