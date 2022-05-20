#include<stdio.h>
#include<math.h>
#define PI 3.141592653589793
#define g 9.81;

double height(double u, double radius);

int main(){
    int degree, u;
    double rad, h;
    scanf("%d\n%d", &degree, &u);
    rad = ((2 * degree) * PI)/180;
    printf("theta (degree) : %d\n", degree);
    printf("u (m/s) : %d\n", u);
    printf("h (m) : %.4lf", height(u, rad));
    return 0;
}

double height(double u, double radius){
    double h, sine2, gg;
    sine2 = ((1 - cos(radius))/2);
    gg = 2*g;
    h = (pow(u, 2) * sine2)/gg;
    return h;
}