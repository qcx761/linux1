#include <stdio.h>
#define HOUR 60
int main(){
    int minutes,hours,mins;
    scanf("%d", &minutes);
    while(minutes>0){
        hours=minutes/HOUR;
        mins=minutes%HOUR;
        printf("%dminutes=%dhours %dminutes\n",minutes,hours,mins);
        scanf("%d", &minutes);
    }
    return 0;
}
