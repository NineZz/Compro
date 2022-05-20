#include<stdio.h>
#include<math.h>

double perimeter(double x, double y);
double area(double x, double y);

int main(){
    double a, b;
    scanf("%lf\n%lf", &a, &b);
    printf("Perimeter: %.2lf\n", perimeter(a, b));
    printf("Area: %.2lf", area(a, b));
    return 0;
}

double perimeter(double x, double y){
    double z;
    z = sqrt(pow(x, 2)+pow(y, 2));
    return x+y+z;
}

double area(double x, double y){
    return (x*y/2);
}