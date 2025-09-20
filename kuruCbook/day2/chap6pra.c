#include <stdio.h>

int main(void)
{
// 1 3 5 8割引を表示
int price;
printf("定価を入力してください：");
scanf("%d", &price);
printf(" => 1割引：%f,3割引：%f,5割引：%f,8割引：%f\n",price*0.9,price*0.7,price*0.5,price*0.2);
}
