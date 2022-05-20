#include<stdio.h>
#include<ctype.h>

int main(){
    char word;
    scanf("%c", &word);
    if (islower(word))
        printf("lowercase");
    else if (isupper(word))
        printf("uppercase");
    else if (isalnum(word))
        printf("number");
    else
        printf("error");
    return 0;
}
