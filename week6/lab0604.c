#include <stdio.h>
#include <string.h>

int main(){
    char word[101], temp;
    int i, count, len;
    scanf("%[^\n]", word);
    len = strlen(word);
    count = len - 1;
    for (i = 0; i < count; i++){
        temp = word[i];
        word[i] = word[count];
        word[count] = temp;
        count--;
    }
    printf ("%s",  word);
}