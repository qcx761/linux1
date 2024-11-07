#include <stdio.h>
double min(double x,double y);
int main(void){
    double x, y;
    while(scanf("%lf %lf",&x,&y)==2){
        double MIN=min(x,y);
        printf("The smaller number is %lf\n",MIN);
    }
    return 0;
}
double min(double x,double y)
{
    return x<y?x:y;
}

