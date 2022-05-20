#include<stdio.h>
#include<string.h>

struct Book {
    char id[10];
    char name[100];
    char author[100];
};

int main()
{
    int num;
    char check[10];
    scanf("%d", &num);
    struct Book books[num];
    scanf("%s", check);
    for (int i = 0; i < num; i++)
    {
        scanf("%s %s %s", books[i].id, books[i].name, books[i].author);
    }
    for (int i = 0; i < num; i++)
    {
        if (strcmp(check, books[i].id)==0)
        {
            printf("%s %s %s", books[i].id, books[i].name, books[i].author);
            break;
        }
        else if (i == num-1)
        {
            printf("Not Found");
        }
    }
    return 0;
}
