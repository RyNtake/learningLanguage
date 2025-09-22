#include <stdio.h>

int main(void)
{
  /* 入力された10個の数字を最後から表示するプログラム*/
  int array[10];
  int i = 0;

  for (int i = 0; i <= 10; i++)
  {
    do
    {
      printf("%2dつ目の整数を入力してください。:", i + 1);
      scanf("%d", &array[i]);
    } while (array[i] % 1 != 0);
  }

  for (int i = 10-1; i >= 0; i--)
  {
    printf("%d ", array[i]);
  }

  printf("\n");

  return 0;
}
