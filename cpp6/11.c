#include<stdio.h>
void a(char str[],int n)
{
    if(n==-1)
    {
        return;
    }
    printf("%c",str[--n]);
    a(str,n);
}
int main(){
    char arr[8];
     for(int i=0;i<8;i++)
    {
        scanf("%c",&arr[i]);
    }
    a(arr,8);
    return 0;
}   