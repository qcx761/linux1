#include <stdio.h>
void Temperatures(double fahrenheit) {
    const double a=273.16;
    const double b=32.0;
    double celsius,kelvin;
    celsius=5.0/9.0*(fahrenheit-b);
    kelvin=celsius+a;
    printf("%.2ffahrenheit=%.2fcelsius\n%.2ffahrenheit=%.2fkelvin\n",fahrenheit,celsius,fahrenheit,kelvin);
}
int main(void) {
    double fahrenheit;
    printf("fahrenheit temperature:");
    while(scanf("%lf",&fahrenheit)==1)
    {
        Temperatures(fahrenheit);
        printf("next fahrenheit temperature:");
    }
    printf("over\n");
    return 0;
}