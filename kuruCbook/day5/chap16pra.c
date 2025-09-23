/**3人分の、名前、年齢、性別を入力して表示するプログラム
 * ただし、データは構造体で記憶することとし、また、データの入力と表示にはそれぞれ専用の関数を用いる。
 * (追加課題)
 * 1. 年齢が0-130から外れたら入力し直す。
 * 2. 性別はフォーマット以外は再入力。加えて、出力時には「男性」「女性」と変更する。
 * 3. 出力フォーマットを綺麗にする。
 * 4. 再度この問題をフルスクラッチで作成する。
 */

#include <stdio.h>
#include <string.h>

typedef struct {
  char name[256];
  int age;
  char sex;
} Person;

void memberRegister(Person *person);

void printout(Person person);

int main(void)
{
  Person person[3];

for (int i = 0; i < 3; i++)
{
  printf("%d人目の情報を入力します\n",i+1);
  memberRegister(&person[i]);
}

for (int i = 0; i < 3; i++)
{
  printout(person[i]);
}


  return 0;
}

void memberRegister(Person *person)
{
  char typedString[256];
  int age;
  char sex;

  printf("名前を入力してください。（ローマ字）：");
  scanf("%s",typedString);
  strcpy(person->name,typedString);
  printf("年齢を入力してください。（0 - 130）：");
  scanf("%d",&age);
  (*person).age = age;
  getchar();   // これがないと、age入力時にタイプした”\n"を読み取って先に進んでしまう。scanf("%c")の前は要注意。
  printf("性別を入力してください。（M / F）：");
  scanf("%c",&sex);
  (*person).sex = sex;
}

void printout(Person person)
{
  // printf("========%d人目========\n",i+1);
  printf("[名前]：%s\n",person.name);
  printf("[年齢]：%d\n",person.age);
  printf("[性別]：%c\n",person.sex);
}
