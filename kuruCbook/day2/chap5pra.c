#include <stdio.h>

int main(void)
{
  int bill = 1000;
  int bev = 198;
  int milk = 138*2;
  float tax = 1.05;
  printf("%4d  - (%4d + %4d)*%4f = %4d\n",bill,bev,milk,tax,(int)(bill - (bev + milk)*tax));
  return 0;
}
