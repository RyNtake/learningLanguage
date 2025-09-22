#include <stdio.h>

int main(void)
{
  /**苗字と名前を別々に入力させて、それを結合して表示するプログラム
   * [自作問題]
   * 1. sprint関数を利用すること
   * 2. ローマ字以外の文字の入力があった場合打ち直しを要求すること
   * 3. 文字数の切り捨てを行うこと。可能なら短い文字数での打ち直しを要求すること
   *  */

  char fullName[20];
  char lastName[10];
  char firstName[10];

  printf("名字を入力してください：");
  scanf("%s",lastName);
  printf("名前を入力してください：");
  scanf("%s",firstName);

  printf("あなたの名前は、");
  sprintf(fullName,"%s%s",lastName,firstName);
  printf(fullName);
  printf("です。\n");

  return 0;
}
