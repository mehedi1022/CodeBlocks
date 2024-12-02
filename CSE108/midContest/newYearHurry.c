#include <stdio.h>
int main(){

int n, k;
int i, j;
int time = 0;
int count = 0;
scanf("%d", &n);
scanf("%d", &k);
int need = 240 - k;

for(i = 1; i <= n; i++){
    time += (i * 5);
    if(need >= time){
        count++;
    }
}
printf("%d", count);
return 0;
}
