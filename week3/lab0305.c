#include<stdio.h>

int main(){
    float a, b;
    scanf("%f %f", &a, &b);
    double ans = (a*2)+(b*2);
    printf("Perimeter of rectangle = %.4lf units", ans);
    return 0;
}