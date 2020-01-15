#include<stdio.h>
int main(int argc, char const *argv[]) {
    int a, b, c;
    printf("整数1:");
    scanf("%d", &a);
    printf("整数2:");
    scanf("%d", &b);
    c = a % b;

    if (c == 0) {
        printf("%d是%d的约数\n", b, a);
    } else {
        printf("%d不是%d的约数\n", b, a);
    }

    return 0;
}