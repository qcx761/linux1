#include<stdio.h>
int main()
{
    float m=0;
    double arr[8];
    double atr[8];
    for(int i=0;i<8;i++)
    {
        scanf("%lf",&arr[i]);
        m+=arr[i];
        atr[i]=m;
    }
    printf("\n");
    for(int i=0;i<8;i++)
    {
        printf("%lf ",atr[i]);
    }
    return 0;
}