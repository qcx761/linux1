#include <stdio.h>
int main(void) {
    char a;
    printf("输入一个大写字母: ");
    scanf(" %c", &a);
    char b = 'A';
    int n = a - b;
    for (int c = 0; c <= n; c++) {
        for (int m = n - c; m > 0; m--) {
            printf(" ");
        }
        for (char o = 'A'; o <= 'A' + c; o++) {
            printf("%c", o);
        }
        for (char v = 'A' + c - 1; v >= 'A'; v--) {
            printf("%c", v);
        }
        printf("\n");
    }
    return 0;
}