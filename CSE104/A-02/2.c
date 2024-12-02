#include <stdio.h>
#include <string.h>

int last_occurrence(char string[], char character);

int main()
{
  char string[] = "abcccdefghab";

  char character = 'c';

  int index = last_occurrence(string, character);

  if (index == -1)
  {
    printf("%c not found in string.\n", character);
  }
  else
  {
    printf("%c last occurrence: %d.\n", character, index);
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
