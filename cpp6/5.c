#include <stdio.h>
int main(void) {
    char a;
    printf("输入一个大写字母");
    scanf("%c",&a);
    char b='A';
    int n=a-b;
    for(int c=0;c<n+1;c++)
    {
        for(int m=n-c;m>=0;m--)
    {
        printf(" ");
    }
    int u=c;
    char o;
    for(o='A';u>0;o++,u--)
    {
        printf("%c",o);
    }
    for(char v=o;v>=b;v--)
    {
        printf("%c",v);
    }
    printf("\n");
    }
    return 0;
}