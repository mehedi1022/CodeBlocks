#include <stdio.h>
#include <string.h>

int last_occurrence(char string[], char character);

int main()
{
    char string[100];
    char character;

    printf("Enter a string: ");
    gets(string);


    printf("Enter a character to find: ");
    scanf("%c", &character);

    int index = last_occurrence(string, character);

    if (index == -1)
    {
        printf("%c not found in string.\n", character);
    }
    else
    {
        printf("Last occurrence of %c: %d.\n", character, index);
    }

    return 0;
}

int last_occurrence(char string[], char character)
{
    int index = -1;
    int length = strlen(string);

    for (int i = 0; i < length; i++)
    {
        if (string[i] == character)
        {
            index = i;
        }
    }

    return index;
}
