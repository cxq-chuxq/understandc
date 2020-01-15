#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void) {
    srand((unsigned)time(NULL));
    int a = 0, b = 0;
    printf("%s\n", "输入第一个数字:");
    scanf("%d", &a);
    printf("%s\n", "输入第二个数字:");
    scanf("%d", &b);
    printf("%s%d到%d之间的随机数:%d\n", "随机生成", a, b, a + rand() % (b - a + 1));
    printf("随机生成%d到%d之间的随机数:%d\n", a, b, a + rand() % (b - a + 1));
    return 0;
}
