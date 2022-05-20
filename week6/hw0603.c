#include <stdio.h>
#include <string.h>

int main (){
    char word[101];
    int i, len, check = 0;  

    scanf ("%s", word);
    len = strlen(word);

    for (i = 0; i < len; i++){
        if (word[i] != word[len - i - 1]){
            check = 1;
            break;
        }
    }
    if (check){
        printf ("It is not Palindrome.");
    }
    else{
        printf ("It is Palindrome.");
    }
    return 0;
}