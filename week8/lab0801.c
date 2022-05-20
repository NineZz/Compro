#include <stdio.h>
#include <string.h>

int main(){
    char html[1000], find[50], txt[100], array[100][100];
    int check = 0, check2 = 0;

    while(1) {
        scanf("%s", txt);
        strcat(html, txt);
        if (strstr(txt, "</html>"))
            break;
    }

    scanf("%s", find);

    for (int i=0 ;i <= strlen(html);i++){
        if (html[i] == find[0] && html[i+1] == find[1]){
            for (i = i+2;html[i] != '<';i++){
                if (html[i] != '>'){
                    array[check][check2] = html[i];
                    check2++;
                }
            }
            check++;
            check2 = 0;
        }
    }

    for (int i = 0; i < check ; i+=2)
        printf("%s\n", array[i]);
}
