#include <stdio.h>

int main() {
    int number;
    float decimal;
    char character;
    char string[100];

    // Input integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Input float
    printf("Enter a float: ");
    scanf("%f", &decimal);

    // Input character
    printf("Enter a character: ");
    scanf(" %c", &character); // Notice the space before %c to ignore previous newline

    // Input string (without space)
    printf("Enter a string: ");
    scanf("%s", string);

    // Output the values
    printf("\nYou entered:\n");
    printf("Integer: %d\n", number);
    printf("Float: %.2f\n", decimal);
    printf("Character: %c\n", character);
    printf("String: %s\n", string);

    return 0;
}
