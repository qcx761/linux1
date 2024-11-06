#include <stdio.h>
int main() {
    int m=0;
    char ch;
    while((ch=getchar())!='#')
    {
        m++;
        int a;
        a=ch;
        printf("%c-%d ",ch,a);
        if(m==8)
        {
            m=0;
            printf("\n");
        }
    }
    return 0;
}



// #include <stdio.h>

// #define SIZE 8

// int main(void) {
//     int ch;
//     int count = 0;

//     printf("Please input chars (# to quit):\n");
//     // 判断读到#字符停止
//     while ((ch = getchar()) != '#') {
//         if (count++ % SIZE == 0) {
//             printf("\n");
//         }
//         // 打印字符-ASCII码
//         if (ch == '\n') {
//             printf("\\n-%3d ", ch);
//         } else if (ch == '\t') {
//             printf("\\t-%3d ", ch);
//         } else {
//             printf("%c-%3d ", ch, ch);
//         }
//     }

//     return 0;
// }
