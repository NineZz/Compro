#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c, ans;
    scanf("%lf %lf %lf", &a, &b, &c);
    ans = (1.00/2.00)*a*(b+c);
    printf("%.2lf", ans);
    return 0;
}
