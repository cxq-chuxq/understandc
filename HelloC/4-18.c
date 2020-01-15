#include<stdio.h>
int main(int argc, char const *argv[]) {
    int a, b, c, i;
    printf("输入一个整数值:");
    scanf("%d", &a);
    b = a % 5;
    c = a / 5;

    if (c > 0) {
        for (i = 1; i <= c; i++) {
            printf("*****\n");
        }
    }

    for (i = 1; i <= b; i++) {
        printf("*");
    }

    printf("\n");

    return 0;
}
