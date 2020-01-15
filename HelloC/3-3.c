#include <stdio.h>
int main(int argc, char const *argv[]) {
    int a;
    printf("输入一个整数值:");
    scanf("%d", &a);

    if (a >= 0) {
        printf("%d\n", a);
    } else {
        printf("%d\n", -a);
    }


    return 0;
}