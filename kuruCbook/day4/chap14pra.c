#include <stdio.h>
#include <string.h>

int main(void)
{
  /* 苗字と名前を別々に入力させて、それを結合して表示するプログラム */

  char name[20];
  char firstName[10];

  printf("名字を入力してください：");
  scanf("%s",name);
  printf("名前を入力してください：");
  scanf("%s",firstName);

  strcat(name,firstName);

  printf("あなたの名前は、%sです。\n",name);

  return 0;
}
