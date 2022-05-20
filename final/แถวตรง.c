#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    double height[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%lf", &height[i]);
    }
    double* ptr_1 = height;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++) 
        {
            if (*(ptr_1 + j) < (*(ptr_1 + (j + 1)))) {
                double tmp = *(ptr_1 + j);
                *(ptr_1 + j) = *(ptr_1 + (j + 1));
                *(ptr_1 + (j + 1)) = tmp;
            }
        }
    }
    for (int i = 0; i < num; i++)
    {
        printf("%.2lf\n", height[i]);
    }
    return 0;
}
