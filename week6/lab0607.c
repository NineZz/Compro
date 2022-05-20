#include <stdio.h>
#include <string.h>
#include <ctype.h>

char decode(char alpha){
    char array[26] = {'Q', 'R', 'M', 'N', 'C', 'E', 'D', 'K', 'L', 'J', 'O', 'S', 'H', 'T',
     'U', 'F', 'V', 'Z', 'G', 'W', 'I', 'A', 'B', 'X', 'Y', 'P'};
    int i;

    if (!isalpha(alpha))
        return alpha;

    for (i = 0; i < 26; i++){
        if (toupper(alpha) == array[i]){
            if (isupper(alpha)){
                if (i <= 4)
                    return array[i + 21];
                else
                    return array[i - 5];
            }
            else{
                if (i <= 4)
                    return tolower(array[i + 21]);
                else
                    return tolower(array[i - 5]);
            }
        }
        else
            continue;
    }
}

int main(){
    char word[201];
    int i, len;
    scanf("%[^\n]", word);
    len = strlen(word);

    for(i = 0; i < len; i++){
        printf("%c", decode(word[i]));
    }
    return 0;
}

