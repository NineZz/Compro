#include <stdio.h>
#include <string.h>

int main()
{
	char name[10][201], tmp[201];
	int i, j;
	for (i = 0; i < 10; i++)
    {
		scanf("%s", name[i]);
	}

	for (i = 0; i < 10; i++)
    {
		for (j = i+1; j < 10; j++)
        {
			if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(tmp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], tmp);
			}
		}
	}
	for (i = 0; i < 10; i++)
    {
		printf("%s\n", name[i]);
	}
	return 0;
}
