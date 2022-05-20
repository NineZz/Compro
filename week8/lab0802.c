#include<stdio.h>

int main()
{
    char sentence[151], newsen[151];
    scanf("%[^\n]", sentence);

    int i = 0, j = 0;

	while (sentence[i])
	{
		if (sentence[i] != ' ')
        {
            newsen[j] = sentence[i];
            j++;
        }
		i++;
	}

	newsen[j] = '\0';

    printf("%s", newsen);

    return 0;
}
