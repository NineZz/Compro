#include<stdio.h>

int main(){
    double score;
    scanf("%lf", &score);
    if (score<=100 && score>=80){
        printf("A");
    }
    if (score<=79.99 && score>=70){
        printf("B");
    }
    if (score<=69.99 && score>=60){
        printf("C");
    }
    if (score<=59.99 && score>=50){
        printf("D");
    }
    if (score<=49.99 && score>=0){
        printf("F");
    }
    if (score>100 || score<0){
        printf("Out of Range");
    }
    return 0;
}
