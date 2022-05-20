#include <stdio.h>
#include <string.h>

struct student_info{
    char firstname[100];
    char lastname[100];
    double midterm;
    double final;
    double assignment;
    double total;
};

double calScore(struct student_info student);
int checkScore(struct student_info student);
void printScore(struct student_info students[], int amount);

int main(){
    struct student_info students[10];
    int i = 0;
    while (i >= 0){
        scanf("%s", students[i].firstname);
        if (strcmp(students[i].firstname, "END") == 0){
            break;
        }
 
        scanf("%s", students[i].lastname);

        scanf("%lf %lf %lf", &students[i].midterm, &students[i].final, 
        &students[i].assignment);
         
        students[i].total = calScore(students[i]);
         
        if (checkScore(students[i])){
            printf("Error\n");
            i--;
        }
        i++;
    }
    printScore(students, i);
    return 0;
}
 
double calScore(struct student_info student){
    return student.midterm + student.final + student.assignment;
}

int checkScore(struct student_info student){
    if (student.total < 0 || student.total > 100 || 
    student.midterm < 0 || student.midterm > 100 || 
    student.final < 0 || student.final > 100 || 
    student.assignment < 0 || student.assignment > 100){
        return 1;
    }
    else{
        return 0;
    }
}

void printScore(struct student_info students[], int amount){
    printf("1234567890123456789012345678901234567890\n");
    printf("M    F    A    TT\n");
    for (int j = 0; j < amount; j++){
        printf("%.1s %s        %.0lf   %.0lf   %.0lf   %.0lf\n", 
        students[j].firstname, students[j].lastname, students[j].midterm, students[j].final, students[j].assignment, students[j].total);
    }
}
