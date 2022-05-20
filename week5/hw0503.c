#include<stdio.h>

int main(){
    int age, height, weight, i = 1;
    int ans1 = 0, ans2 = 0, ans3 = 0, ans4 = 0;
    float sum_age = 0, sum_height = 0, sum_weight = 0, avg_age, avg_height, avg_weight;
    while (i<=50){
        scanf("%d %d %d", &age, &height, &weight);
        if (age >= 20 && height >= 160){
            ans1++;
        }
        if (age < 20 && (height <= 180 || weight >= 60)){
            ans2++;
        }
        if (age >= 30 && weight >= 40 && weight <= 80){
            ans3++;
        }
        if (age < 40 && (height <= 200 || weight < 85)){
            ans4++;
        }
        sum_age+=age;
        sum_height+=height;
        sum_weight+=weight;
        i++;
    }
    avg_age = sum_age/50;
    avg_height = sum_height/50;
    avg_weight = sum_weight/50;
    printf("Age >= 20 and Height >= 160: %d\n", ans1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", ans2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", ans3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", ans4);
    printf("Average Age: %d\n", (int)avg_age);
    printf("Average Height: %.2f\n", avg_height);
    printf("Average Weight: %.2f\n", avg_weight);
    return 0;
}
