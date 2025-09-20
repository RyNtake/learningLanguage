#include <stdio.h>

int main(void)
{
  /* code */
  int year;
  printf("西暦年を入力してください。：");
  scanf("%d",&year);

  int olympic = year % 4;

  if (olympic == 0)
  {
    printf("その年は夏季オリンピックが開催されました。\n");
  }
  else if (olympic == 2)
  {
    printf("その年は冬季オリンピックが開催されました。\n");
  }
  else
  {
    printf("その年にオリンピックは開催されていません。\n");
  }


  return 0;
}
