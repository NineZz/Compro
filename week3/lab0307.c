#include<stdio.h>

int main(){
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float price = a*c;
    float num = price*(b/100);
    float ans = price-num;
    printf("%.2f", ans);
    return 0;
}
