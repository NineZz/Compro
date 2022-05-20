#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_in(char al, int **data){
    int i;
    for(i = 0; i < 26; i++){
        if (al == data[i][0]){
            return 1;
        }
    }
    return 0;
}

int find(char al, int **data){
    int i;
    for(i = 0; i < 26; i++){
        if (al == data[i][0]){
            break;
        }
    }
    return i;
}

int main(){
    int *data[26], count, i;
    char al;
    scanf("%d", &count);

    for(i = 0; i < 26; i++){
        data[i] = (int*)malloc(3*sizeof(int));
    }

    for(i = 0; i < 26; i++){
        data[i][0] = ' ';
        data[i][1] = 0;
    }

    int j = 0;
    for(int i = 0; i < count; i++){
        scanf(" %c", &al);
        al = tolower(al);
        if (!is_in(al, data)){
            data[j][0] = al;
            data[j][1] += 1;
            j++;
        }
        else{
            data[find(al, data)][1] += 1;
        }
    }

    for(i = 0; i < 26; i++){
        if (data[i][0] != ' '){
            printf("%c: %d\n", data[i][0], data[i][1]);
        }
        else{
            break;
        }
    }

    return 0;
}
