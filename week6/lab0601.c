#include<stdio.h>

int main(){
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};
    int num, i;
    while (1){
        scanf("%d", &num);
        if (1 <= num && num <= 20){
            for(i = 0; i < 8; i++){
                if (M[i] == num){
                    printf("%d is in M at index [%d]", num, i);
                    break;
                }
                else if (N[i] == num){
                    printf("%d is in N at index [%d]", num, i);
                    break;
                }
                else if (i == 7){
                    printf("%d is not in neither M nor N", num);
                    break;
                }
                
            }
            break;
        }
        else{
            continue;
        }
    }
    return 0;
}
