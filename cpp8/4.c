#include <stdio.h>
#include<stdbool.h>
#include<ctype.h>
int main() {
    int len=0,count=0;
    char ch;
    bool a=true;
    while((ch=getchar())!=EOF)
    {
        if(isalpha(ch)){
            len++;
        }
        if(isalpha(ch)&&!isspace(ch)&&a){
            count++;
            a=false;
        }
        if(!isalpha(ch)&&isspace(ch)&&!a){
            a=true;
        }
    }
    printf("\n");
    printf("%f\n",len*1.0/count);
    return 0;
}








// #include <stdio.h>
// #include <ctype.h>
// #include <stdbool.h>

// #define STOP '&'

// int main(void) {
//     int ch;
//     // 字符个数
//     long n_chars = 0L;
//     // 单词个数
//     long n_words = 0;
//     // 单词标识
//     bool in_word = false;

//     printf("Please enter chars (%c to quit):\n", STOP);
//     // 遇到停止词时，结束输入
//     while ((ch = getchar()) != STOP) {
//         // 判断是否为字母
//         if (isalpha(ch))
//             n_chars++;

//         // 如果当前字符不是空白符，则表明是单词的字母，标记单词标识为true，单词数加1
//         if (!(isspace(ch) || ispunct(ch)) && !in_word) {
//             in_word = true;
//             n_words++;
//         }
//         // 如果遇到空格或标点符号，单词结束，标记单词标识为false
//         if ((isspace(ch) || ispunct(ch)) && in_word)
//             in_word = false;
//     }

//     // 打印结果
//     printf("\nThere are %ld words and %ld character.\n", n_words, n_chars);
//     printf("The average number of letters in a word are %.2f", 1.0 * n_chars / n_words);

//     return 0;
// }
