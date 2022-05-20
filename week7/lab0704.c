#include<stdio.h>
#include<ctype.h>

double celsiusToFahrenheit(double celcius);
double fahrenheitToCelcius(double fahrenheit);

void printFarenheit(double fahrenheit);
void printCelcius(double celcius);

int main(){
    double temp, ans;
    char unit;
    scanf("%lf %c", &temp, &unit);
    if (toupper(unit) == 'C'){
        ans = celsiusToFahrenheit(temp);
        printFarenheit(ans);
    }
    else if (toupper(unit) == 'F'){
        ans = fahrenheitToCelcius(temp);
        printCelcius(ans);
    }
    return 0;
}

double celsiusToFahrenheit(double celcius){
    double fah;
    fah = 32 + (celcius * (180.0/100.0));
    return fah;
}

double fahrenheitToCelcius(double fahrenheit){
    double cel;
    cel = (fahrenheit - 32) * (100.0/180.0);
    return cel;
}

void printFarenheit(double fahrenheit){
    printf("%.2lf f", fahrenheit);
}

void printCelcius(double celcius){
    printf("%.2lf c", celcius);
}