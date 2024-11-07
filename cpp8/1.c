#include <stdio.h>
int main() {
    int count=0;
    while(getchar()!='&')
        count++;
    printf("%d",count);
    return 0;
}