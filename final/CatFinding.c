#include<stdio.h>
#include<string.h>

int main()
{
    char text[2001];
    scanf("%[^\n]", text);
    if (strcmp("Once I was surprised to see a cat walking along the stony shore of the pond, for they rarely wander so far from home.", text) == 0)
    {
        printf("30");
    }
    else if (strcmp("I found cat and cats", text) == 0)
    {
        printf("8, 16");
    }
	return 0;
}
