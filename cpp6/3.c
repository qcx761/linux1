#include<stdio.h>
int main(){
    for(int i=1;i<7;i++)
    {
        char m;
        m='F';
        for(int a=0;a<i;a++)
        {
            printf("%c",m);
            m--;
        }
        printf("\n");
    }
    return 0;
}