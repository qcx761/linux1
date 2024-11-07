#include <stdio.h>
void sort(double *p1,double *p2,double *p3){
    if (*p1>*p2){
        swap(p1,p2);
    }
    if (*p1>*p3){
        swap(p1,p3);
    }
    if (*p2>*p3){
        swap(p2,p3);
    }
}
void swap(double *x, double *y){
    double n;
    n=*x;
    *x=*y;
    *y=n;
}
int main(void){
    double x,y,z;
    while(scanf("%lf %lf %lf",&x,&y,&z)==3)
    {
        sort(&x,&y,&z);
        printf("%g %g %g\n",x,y,z);
    }
    return 0;
}