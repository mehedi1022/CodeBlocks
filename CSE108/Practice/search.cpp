#include <stdio.h>

int calculateDrinks(int totalBottles, int c){

int totalDrinks = 0;
while (totalBottles >= c){
        int newSodas = totalBottles / c;

    totalDrinks += newSodas;
    totalBottles = newSodas + (totalBottles % c);
}
return totalDrinks;
}





int main(){

int T, i;
scanf("%d", &T);

for(i = 0; i < T; i++){
    int e, f, c;
    scanf("%d%d%d", &e,&f,&c);
    int totalBottles = e + f;
    printf("%d\n", calculateDrinks(totalBottles, c));
}


return 0;
}
