#include <stdio.h>
#include <string.h>
int main()
{
  char s[] = "I live cat and dog."; /* 探す対象の文字列*/
  char c = 'a'; /* 探す文字列*/
  char *p = s;
  int n = 0;

  printf("\"%s\"の中から\'%c\'を探します。\n",s,c);

  while (1)
  {
    p = strchr(p,c);
    if(!p)
      break;
    printf("%d文字目で発見しました。\n",p-s+1);
    n++;
    p++;
  }

  if(n == 0)
    printf("1つも見つかりませんでした。\n");
  else
    printf("全部で%d個見つかりました。\n",n);

  return 0;
}
