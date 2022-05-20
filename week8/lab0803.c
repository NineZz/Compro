#include<stdio.h>
#include<ctype.h>

int main()
{
    char sentence[151], alphabet;
    int count = 0, i = 0;

    scanf("%c\n%[^\n]", &alphabet, sentence);

    while (sentence[i])
    {
        if (tolower(sentence[i]) == tolower(alphabet))
        {
            count++;
        }
        i++;
    }

    printf("%d", count);
    return 0;
}
