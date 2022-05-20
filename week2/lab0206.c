#include<stdio.h>

int main(){
    char text_1[31];
    char text_2[31];
    char text_3[31];
    char text_4[31];
    scanf("%s %s %s %s", text_1, text_2, text_3, text_4);
    printf("String 1: %.3s\n", text_1);
    printf("String 2: %.4s\n", text_2);
    printf("String 3: %.5s\n", text_3);
    printf("String 4: %.6s\n", text_4);
    return 0;
}