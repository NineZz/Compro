#include<stdio.h>

int main(){
    float num1,num2,num3;
    scanf("%f %f %f",&num1,&num2,&num3);
    if (num2>=num1 && num1>=num3 || num3>=num1 && num1>=num2){
        printf("%.2f",num1);
    }
    if (num1>=num2 && num2>=num3 || num3>=num2 && num2>=num1){
        printf("%.2f",num2);
    }
    if(num1>=num3 && num3>=num2 || num2>=num3 && num3>=num1){
        printf("%.2f",num3);
    }
    return 0;
}