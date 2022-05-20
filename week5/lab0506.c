#include<stdio.h>

int main(){
    int i, space, rows, star = 0;
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++){
        for (space = 1; space <= rows - i; space++){
            printf(" ");
        }
        for (star = 0; star != 2 * i - 1; star++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
