#include<stdio.h>  
int main(void){  
   int a, b;  
   int wa;  
   puts("请输入两个整数");  
   printf("整数1:");  
   scanf("%d", &a);  
   printf("整数2:");  
   scanf("%d", &b);  
   wa = a * b;  
   printf("它们的乘积是%d\n", wa);  
   return 0;  
}  
