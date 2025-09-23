#include <stdio.h>

void sizeChecker(int *max,int *min,int *input);

int main(void)
{
  /**0~100の範囲で入力された複数の数値の中から、最大値と最小値を求めて表示するプログラムを作成せよ。
   * -1が入力された場合は入力の終わりと判定する。ただし、最大値と最小値は main 関数以外の1つの関数の中で求める。
   * また、入力された数値を記憶する
   * 配列の要素数は10とし、それ以上入力された場合はエラーが起きても仕方ないこととする。
   * 【ヒント】配列の中に-1があればデータの終わりだと判断できる。
   * 【ヒント】 最小値を探すには、最大値を記憶した変数との比較を繰り返せば良い。
   * （追加課題）
   * 1. 値が入力されなかった時、「入力されませんでした。」と表示する。
   * */

  int i = 0,input[10],max,min;

  do
  {
    do
    {
      printf("%dつ目の整数を入力(0-100)。-1を入力するとそこまでの数だけ参照：",i+1);
      scanf("%d",&input[i]);
    } while (input[i] < -1 || input[i] > 100);
    i++;
  } while (input[i - 1] != -1);

  sizeChecker(&max,&min,input);
  printf("max : %d, min : %d\n",max,min);

  return 0;
}

void sizeChecker(int *max,int *min,int *input)
{
  int i = 0;

  *max = 0;
  *min = 100;

  while (input[i] != -1)
  {
    if(input[i] > *max)*max = input[i];
    if(input[i] < *min)*min = input[i];
    i++;
  }

}
