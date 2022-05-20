#include <stdio.h>

int findStep(int n);
int main(){
    int n;
    scanf("%d", &n);
    printf("method = %d", findStep(n));
    return 0;
}

int findStep(int n){
    if (n == 0)
       return 1;
    else if (n < 0)
        return 0;
    else
        return findStep(n - 2) + findStep(n - 1);
}

// #include <stdio.h>
// int main() {
//     int num, i, re, change=0;
//     scanf("%d", &num);
//     int check1=0, check2=1;
//     for (i=0; i<num; i++){
//         re += change;
//         change = check1 + check2;
//         check1 = check2;
//         check2 = change;
//     }
//     printf("method = %d", change);
//     return 0;
// }