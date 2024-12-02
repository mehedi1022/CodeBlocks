#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int count = 0, inWord = 0, alpha=0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (!inWord) {
                inWord = 1;
                count++;
            }
        } else {
            inWord = 0;
        }
    }
    for (int i = 0; str[i] != '\0'; i++){
        if ((str[i] >='A' && str[i] <='Z') || (str[i] >='a' && str[i] <='z')){
            alpha++;
        }
    }


    printf("Total number of words: %d", count);
    printf("\nTotal number of alphabets: %d", alpha);
    return 0;
}
