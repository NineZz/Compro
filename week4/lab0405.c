#include<stdio.h>

int main(){
    char word;
    scanf("%c", &word);
    int nword = (int)word;
    if (nword>=65 && nword<=90)
        printf("%c", nword+32);
    else if (nword>=97 && nword<=122)
        printf("%c", nword-32);
    else
        printf("error");
    return 0;
}
