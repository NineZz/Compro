#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct student_info{
    char FirstName[61];
    char LastName[61];
    char Sex[10];
    int age;
    char ID[13];
    double gpa;
};

int main(){
    struct student_info students[21];
    char check[10];
    for (int i = 0;i < 20; i++){
        scanf("%s %s %s %d %s %lf", &students[i].FirstName, &students[i].LastName, &students[i].Sex, &students[i].age, &students[i].ID, &students[i].gpa);
    }
    scanf("%s",check);

    for (int i = 0; i < strlen(check); i++){
        check[i] = tolower(check[i]);
    }

    for (int i = 0; i < 20; i++){
        for (int j = i; j < 20; j++){
            if (strcmp(check, "name") == 0 && strcmp(students[i].FirstName, students[j].FirstName) > 0){
                struct student_info ans_1 = students[i];
                students[i] = students[j];
                students[j] = ans_1;
            }
            else if (strcmp(check, "surname") == 0 && strcmp(students[i].LastName, students[j].LastName) > 0){
                struct student_info ans_1 = students[i];
                students[i] = students[j];
                students[j] = ans_1;
            }
            else if (strcmp(check, "id") == 0 && strcmp(students[i].ID, students[j].ID) > 0){
                struct student_info ans_1 = students[i];
                students[i] = students[j];
                students[j] = ans_1;
            }
        }
    }

    for (int i = 0; i < 20; i++){
        if (strcmp(students[i].Sex, "Male") == 0){
            strcpy(students[i].Sex, "Mr");
        }
        else{
            strcpy(students[i].Sex, "Miss");
        }
        printf("%s %c %s (%d) ID: %s GPA %.2lf\n",students[i].Sex, students[i].FirstName[0], students[i].LastName, students[i].age, students[i].ID, students[i].gpa);
    }

    return 0;
}