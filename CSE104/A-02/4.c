#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int fre[100] = {0}; // Initialize the frequency array to zero

    printf("Enter the str/name: ");
    fgets(str, 100, stdin); // Scanning the string

    // Remove newline character if it's present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    int i = 0;
    while (str[i] != '\0') {
        int j = 0;
        fre[i] = 0;
        while (str[j] != '\0') {
            if (str[i] == str[j]) {  // Checking for repeating characters
                fre[i] += 1;
            }
            j++;
        }
        i++;
    }

    // Find the character with the maximum frequency
    int max = fre[0];
    int n = 0;
    for (int k = 1; k < i; k++) { // Loop from 1 to i - 1
        if (max < fre[k]) {
            max = fre[k];
            n = k;  // Update n to the index with the highest frequency
        }
    }

    printf("\nCharacter = %c \t Frequency = %d\n", str[n], max);
    return 0;
}
