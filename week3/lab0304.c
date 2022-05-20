#include<stdio.h>

int main(){
    double a, b;
    scanf("%lf,%lf", &a, &b);
    double sum = a+b;
    double diff = a-b;
    double pro = a*b;
    double quo = a/b;
    printf("The sum of the given numbers : %lf\n", sum);
    printf("The difference of the given numbers : %lf\n", diff);
    printf("The product of the given numbers : %lf\n", pro);
    printf("The quotient of the given numbers : %lf\n", quo);
    return 0;
}