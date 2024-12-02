#include <stdio.h>
#include <string.h>

int isRotation(char s1[], char s2[]) {
    if (strlen(s1) != strlen(s2)) {
        return 0; // False
    }

    char temp[2 * strlen(s1) + 1];
    strcpy(temp, s1);
    strcat(temp, s1);

    return strstr(temp, s2) != NULL; // True if s2 is found in temp
}

int main() {
    char s1[100], s2[100];

    printf("Enter string s1: ");
    scanf("%s", s1);
    printf("Enter string s2: ");
    scanf("%s", s2);

    if (isRotation(s1, s2)) {
        printf("Output: true\n");
    } else {
        printf("Output: false\n");
    }

    return 0;
}
