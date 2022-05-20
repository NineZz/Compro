#include <stdio.h>

int main(){
    int M, N, i;
    scanf ("%d %d", &M, &N);
    if (M>N){
        for (i = M ; i >= N ; i--)
        printf ("%d ", i);
    }
    else {
        for (i = M ; i <= N ; i++)
        printf ("%d ", i);
    }
    return 0;
}
