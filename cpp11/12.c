#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main(void){
    int ch;
    int low=0;
    int up=0;
    int dig=0;
    int words=0;
    int pun=0;
    bool inword=false;
    while((ch=getchar())!=EOF)
    {
        if(islower(ch))
            low++;
        else if(isupper(ch))
            up++;
        else if(isdigit(ch))
            dig++;
        else if(ispunct(ch))
            pun++;
        if(!isspace(ch)&&!inword)
        {
            inword=true;
            words++;
        }
        if(isspace(ch)&&inword)
            inword=false;
    }
    printf("单词数=%d,小写字母=%d,大写字母=%d,数字=%d,标点符号=%d\n",words,low,up,dig,pun);
    return 0;
}
