#include<stdio.h>

int main(){
    float a, b;
    scanf("%f %f", &a, &b);
    float height = a/100;
    float bmi = b/(height*height);
    printf("%.6f", bmi);
    return 0;
}