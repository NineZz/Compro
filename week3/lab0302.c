#include<stdio.h>

int main(){
    float a, b, c, d;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    float sum = a+b+c+d;
    float avg = sum/4;
    printf("Summation is %.2f\n", sum);
    printf("Average is %.3f", avg);
    return 0;
}