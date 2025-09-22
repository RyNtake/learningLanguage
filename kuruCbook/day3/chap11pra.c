#include <stdio.h>

int olympicYearJudge(int);

int main(void)
{
  int year;
  do
  {
    printf("2000年以降の西暦を入力してください。：");
    scanf("%d",&year);
  } while (year < 2000);

  switch (olympicYearJudge(year))
  {
  case 0:
    printf("その年は夏季オリンピックの開催年です。\n");
    break;

  case 2:
    printf("その年は冬季オリンピックの開催年です。\n");
    break;

  default:
    printf("その年にオリンピックは開かれていません。\n");
    break;
  }

  return 0;
}

int olympicYearJudge(int year)
{
  int whichSeason = year % 4;
  return whichSeason;
}
