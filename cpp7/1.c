#include <stdio.h>
int main() {
    int a=0,b=0,c=0,ch;
    while((ch=getchar())!='#')
    {
        if(ch==' ')
            a++;
        else if(ch=='\n')
            b++;
        else
            c++;
    }
    printf("%d %d %d",a,b,c);
    return 0;
}