
#include <stdio.h>
#include <string.h>

int main(){

int j = 0, i = 0;
char na[100], sna[100];
printf("Enter line of String: ");
gets(na);
while(na[i] != '\0'){
    if(!(na[i] == ' ' && na[i + 1] == ' ')){
        sna[j] = na[i];
        j++;
    }
    i++;
}
sna[j] = '\0';
printf("After Removing Extra Space String is %s", sna);
return 0;
}
