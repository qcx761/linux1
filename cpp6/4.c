#include<stdio.h>
int main(){
    char m='A';
    for(int a=1;a<7;a++){
        for(int b=1;b<=a;b++){
            printf("%c",m);
            m++;
        }
        printf("\n");
    }
    return 0;
}