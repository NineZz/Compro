#include<stdio.h>
#include<string.h>

int main(){
    struct info{
        char name[61], surname[61], sex[7], id[13];
        int age;
        float gpa;
    }peep;

    scanf("%s %s %s %d %s %f", 
    peep.name, peep.surname, peep.sex, &peep.age, peep.id, &peep.gpa);

    if (strcmp(peep.sex, "Male") == 0){
    printf("Mr %.1s %s (%d) ID: %s GPA %.2f", 
    peep.name, peep.surname, peep.age, peep.id, peep.gpa);
    }
    else{
        printf("Miss %.1s %s (%d) ID: %s GPA %.2f", 
        peep.name, peep.surname, peep.age, peep.id, peep.gpa);
    }
    return 0;
}
