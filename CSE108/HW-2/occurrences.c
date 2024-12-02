#include <stdio.h>

int main(){

int myarray[] = {4, 9, 7, 6, 5, 8, 3, 2, 1,5};
int count = 0;
int to_find = 5;

for(int i = 0; i < 10; i++){
    if(myarray[i] == to_find) count++;
}

printf("# of 5s found: %d\n", count);

return 0;
}
