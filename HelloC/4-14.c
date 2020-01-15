#include<stdio.h>
int main(int argc, char const *argv[]) {
    int a, b, c, i;
    int Num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    printf("请输入一个整数:");
    scanf("%d", &a);
    b = a % 10;
    c = a / 10;
    printf("输出结果为:");

    if (c > 0) {
        for (i = 0; i < c; i++) {
            printf("1234567890");

        }

    }

    for (i = 0; i < b; i++) {
        printf("%d", Num[i]);

    }

    printf("\n");



    return 0;
}