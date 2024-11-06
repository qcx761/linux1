#include <stdio.h>
int main() {
    int m=0;
    char ch,prev;
    while((ch=getchar())!='#')
    {
        if(ch=='i'&&prev=='e')
            m++;
        else
           prev=ch;
    }
    printf("%d",m);
    return 0;
}