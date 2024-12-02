#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    char vowels[] = "aeiouAEIOU";


    scanf("%d", &N);

    char surname[43];


    for (int i = 0; i < N; i++)
    {

        scanf("%s", surname);

        int len = strlen(surname);
        int consonant_count = 0;
        int is_hard = 0;


        for (int j = 0; j < len; j++)
        {

            if (strchr(vowels, surname[j]) == NULL)
            {
                consonant_count++;
                if (consonant_count >= 3)
                {
                    is_hard = 1;
                    break;
                }
            }
            else
            {
                consonant_count = 0;
            }
        }


        if (is_hard)
        {
            printf("%s nao eh facil\n", surname);
        }
        else
        {
            printf("%s eh facil\n", surname);
        }
    }

    return 0;
}
