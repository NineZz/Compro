#include<stdio.h>
int main(){
    char fname1[40];
    char sname1[40];
    char person2[40];
    char person3[40];
    scanf ("%s\n", fname1);scanf ("%s\n", sname1);
    scanf ("%[^\n]\n", person2);scanf ("%[^\n]", person3);
    printf ("Person 1: %s %s\n", fname1, sname1);
    printf ("Person 2: %s\n", person2);
    printf ("Person 3: %s\n", person3);
    return 0;
}