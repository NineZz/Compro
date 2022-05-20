#include<stdio.h>
int main(){
    char text[6];scanf("%s", text);
    printf("%-80c", text[0]);
    printf("%2c%-78c", text[0], text[1]);
    printf("%3c%c%-76c", text[0], text[1], text[2]);
    printf("%4c%c%c%-74c", text[0], text[1], text[2], text[3]);
    printf("%5c%c%c%c%-72c", text[0], text[1], text[2], text[3], text[4]);
    return 0;
}