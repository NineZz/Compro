#include<stdio.h>

int length(char *sen);

int main()
{
    char sen1[200], sen2[200];
    scanf("%[^\n]\n%[^\n]", sen1, sen2);

    int num1 = length(sen1), num2 = length(sen2);

    if (num1 == num2){
        printf("\\7");
    }
    else if (num1 > num2){
        printf("%s", sen1);
    }
    else{
        printf("%s", sen2);
    }

    return 0;
}

int length(char *sen)
{
    int count = 0;
    while (sen[count] != '\0'){
        count++;
    }
    return count;
}
