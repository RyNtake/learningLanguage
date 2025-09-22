#include <stdio.h>
#include <math.h>

int main(void)
{
  /**入力された10個の数字を最後から表示するプログラム
   * [自作問題]
   * 1. 整数以外が入力された場合は再入力を促す。
   *  整数かどうかの判定
   *  float型で代入させておいて、実際にarray[]に書くのする前にキャストする。
   *  入力時点で少数部分があれば切り捨てるようにする。
   * 2. (今やらなくていい）入力数が巨大すぎても対応できるようにする。
   *  double型を導入する
   */
  int array[10];
  float inputFig;
  int integer_port;
  int checker;

  for (int i = 0; i <= 10; i++)
  {
    do
    {
      printf("%2dつ目の整数を入力してください。:", i + 1);
      scanf("%f", &inputFig);
      integer_port = (int)inputFig;

      if(integer_port - inputFig == 0) //元の入力＝キャスト後とできれば、小数部を丸めても変化なし、と判断できる。
      {
        checker = 1;
      }
      else
      {
        checker = 0;
      }
    } while (checker = 0);

    array[i] = integer_port;
  }

  for (int i = 10-1; i >= 0; i--)
  {
    printf("%d ", array[i]);
  }

  printf("\n");

  return 0;
}
