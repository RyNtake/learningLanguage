#include <stdio.h>

int main(void)
{
// 1 3 5 8割引を表示
int price;
printf("定価を入力してください：");
scanf("%d", &price);
printf(" => 1割引：%d円,3割引：%d円,5割引：%d円,8割引：%d円\n",(int)(price*0.9),(int)(price*0.7),(int)(price*0.5),(int)(price*0.2));
}
