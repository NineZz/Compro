#include<stdio.h>
#include<math.h>

int main(){
    float price, center, height;
    scanf("%f %f %f", &price, &center, &height);
    double Pi = 3.14159265359;
    double V = (height*Pi)*pow(center/2, 2.0);
    double B_ml = price/V;
    printf("Volume : %.2lfml\nBaht/ml : %.4lf", V, B_ml);
    return 0;
}
