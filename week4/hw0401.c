#include<stdio.h>

int main(){
    float price, sale, number;
    scanf("%f\n%f\n%f", &price, &sale, &number);
    float ans1 = (price*number)*((100-sale)/100), numt = (number/3), ans2 = price*(number-(int)numt);
    if (ans1<ans2){
        printf("Discount %.f%\n", sale);
        printf("%.2f", ans1);
        }
    else{
        printf("Buy 2 Get 1\n");
        printf("%.2f", ans2);
        }
    return 0;
}
