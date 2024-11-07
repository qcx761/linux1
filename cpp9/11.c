#include <stdio.h>
void fib(int n)
{
    if(n==1||n==2)
        printf("1");
    else
    {
        int x=1,y=1,p=0;
        for(int i=3;i<=n;i++)
        {
            p=x+y;
            x=y;
            y=p;
        }
        printf("%d",p);
    }
}
int main(void){
    int n;
    scanf("%d",&n);
    fib(n);
    return 0;
}

