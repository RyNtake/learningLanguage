#include <stdio.h>
#include <string.h>

int main(void)
{
  /**苗字と名前を別々に入力させて、それを結合して表示するプログラム
   * [自作問題]
   * 1. sprint関数を利用すること　OK
   * 2. ローマ字以外の文字の入力があった場合打ち直しを要求すること
   *  a = 97,z=122なので、その範囲に入っているかを判定。文字列ごとにfor文を回す。
   *  ちなみに、A=65,Z=90
   *  charX - 'a'して0~26の間にあるか、ってするとわかりやすい可能性。
   * 3. 文字数の切り捨てを行うこと。可能なら短い文字数での打ち直しを要求すること
   *  for(int i = 0,str[i] != '\0',i++);
   *  が使えるかと
   * 4. スペースを導入　OK
   *  */

  char fullName[21];
  char lastName[11];
  char space[] = " ";
  char firstName[10];

  printf("名字を入力してください：");

  do
  {
    scanf("%s",lastName);
  } while (condition);

  strcat(lastName,space);
  printf("名前を入力してください：");

  do
  {
    scanf("%s",firstName);
  } while (condition);



  printf("あなたの名前は、");
  sprintf(fullName,"%s%s",lastName,firstName);
  printf("%s",fullName);
  printf("です。\n");

  return 0;
}
