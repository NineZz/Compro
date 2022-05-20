#include<stdio.h>
#include<string.h>
#include<ctype.h>

const char* change(char *str);
int check(char word1[], char word2[]);

int main (){
    char word1[102], word2[102];
    scanf("%[^\n]\n%[^\n]", word1, word2);
    printf("*** Results ***\n");
    printf("%s\n", change(word1));
    printf("%s\n", change(word2));
    printf("***************\n");
    if (check(word1, word2)){
        printf("Both strings are the same.");
    }
    else{
        printf("Both strings are not the same.");
    }

    return 0;
}

const char* change(char *str){
    char ch;
    int i = 0;
    while (str[i] != '\0'){
        ch = str[i];
        if (isupper(ch))
            str[i] = tolower(ch);
        else if (islower(ch))
            str[i] = toupper(ch);
        i++;
    }
    return str;
}

int check(char word1[], char word2[]){
    int check = 1, i, len1 = strlen(word1), len2 = strlen(word2);

    if (len1 != len2){
        check = 0;
    }
    else{
        for (i = 0; i < len1; i++){
            if (toupper(word1[i]) != toupper(word2[i])){
                check = 0;
                break;
            }
        }
    }
    return check;
}
