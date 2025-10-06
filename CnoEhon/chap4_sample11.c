#include <stdio.h>
#include <string.h>

int main()
{
  char s[] = "abcdefghijklmn";
  char *p = s;

  printf("%s\n",p+5);

  return 0;
}
