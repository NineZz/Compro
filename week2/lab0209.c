#include<stdio.h>
int main(){
    char word1;
    char word2;
    char word3;
    char word4;
    char word5;
    scanf("%c %c %c %c %c", &word1, &word2, &word3, &word4, &word5);
    printf("%c\n%c\n%c\n%c\n%c", word1+1, word2, word3+1, word4, word5+1);
    return 0;
}