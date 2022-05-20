#include<stdio.h>

int main(){
    char fristname[31];
    char lastname[31];
    char codeid[9];
    int dd, mm, yy;
    float gpa;
    scanf("%s %s %s", fristname, lastname, codeid);
    scanf("%d/%d/%d", &dd, &mm, &yy);
    scanf("%f", &gpa);
    printf("Fullname: %s %s\n", fristname, lastname);
    printf("ID: %s\n", codeid);
    printf("DOB: %02d-%02d-%d\n", dd, mm, yy);
    printf("GPA: %.2f\n", gpa);
    return 0;
}