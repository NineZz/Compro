#include<stdio.h>

int main(){
    int num, ans=0;
    while (num!=-9)
    {
        scanf("%d", &num);
        if (num!=-9){
            ans += num;
        }
    }
    printf("%d", ans);
    return 0;
}
