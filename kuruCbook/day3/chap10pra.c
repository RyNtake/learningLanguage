#include <stdio.h>

int main(void)
{
  /*テストの点数を入力させるプログラム。ただし、テストの点数は0〜100とし、それ以外の点数の場合は再入力させる。*/
  double point;

  do
  {
    printf("テストの点数を0-100で入力してください。：");
    scanf("%lf",&point);
  } while (point < 0 || point > 100);

  printf("テストの点数は%3d点です\n",(int)(point));

  return 0;
}
