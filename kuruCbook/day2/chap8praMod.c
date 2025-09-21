#include <stdio.h>

int main(void)
{
  int month;
  do
  {
    printf("月を入力してください(1-12)：");
    scanf("%d",&month);
  } while (month < 0 || month > 12);


  switch (month)
  {
  case 1:
    printf("%d月は「睦月」\n",month);
    break;

  case 2:
    printf("%d月は「如月」\n",month);
    break;

  case 3:
    printf("%d月は「弥生」\n",month);
    break;

  case 4:
    printf("%d月は「卯月」\n",month);
    break;

  case 5:
    printf("%d月は「皐月」\n",month);
    break;

  case 6:
    printf("%d月は「水無月」\n",month);
    break;

  case 7:
    printf("%d月は「文月」\n",month);
    break;

  case 8:
    printf("%d月は「葉月」\n",month);
    break;

  case 9:
    printf("%d月は「長月」\n",month);
    break;

  case 10:
    printf("%d月は「神奈月」\n",month);
    break;

  case 11:
    printf("%d月は「霜月」\n",month);
    break;

  case 12:
    printf("%d月は「しらす(ﾟ∀。)」\n",month);
    break;

  default:
    printf("予期しないエラーが起きました\n");
    break;
  }
  return 0;
}
