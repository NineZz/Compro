#include<stdio.h>
#include<math.h>

int main(){
    float a, b;
    scanf("%f\n", &a);
    scanf("%f", &b);
    float ans = sqrt(pow(a, 2.0)+pow(b, 2.0));
    printf("%.2f", ans);
    return 0;
}
