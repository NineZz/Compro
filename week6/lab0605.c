#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char word[301], target;
    int count = 0, len, i, j = 0;
    scanf("%[^\n]\n%c", word, &target);
    len = strlen(word);

    for(i = 0; i < len; i++){
        if (tolower(word[i]) == tolower(target)){
            count++;
        }
    }

    if (count > 0){
        printf("There is/are %d \"%c\" in the above sentences.\n", count, target);
        printf("Position: ");
        for (i = 0; i < len; i++){
            if (tolower(word[i]) == tolower(target)){
                j++;
                if(j == 1){
                    printf("%d", i+1);
                }
                else{
                    printf(", %d", i+1);
                }
            }
        }
    }
    else{
        printf("Not found.");
    }
    return 0;
}