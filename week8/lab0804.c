#include<stdio.h>
#include <ctype.h>

int checkwords(char *str);

int main(){
    char words[151];

	scanf("%[^\n]", words);

    int num_words = checkwords(words), count = 0, i = 0;

    printf("%d words\n----\n", num_words);

    while (words[i]){
        if (words[i] != ' '){
            printf(("%c"), tolower(words[i]));
            count++;
        }
        else{
            printf((" : %d\n"), count);
            count = 0;
        }
        i++;
    }
    printf((" : %d\n"), count);

	return 0;
}

int checkwords(char *str){
    int i = 0, ans = 0;
    while (str[i]){
        if (str[i] == ' '){
            ans++;
        }
        i++;
    }
    return ans+1;
}
