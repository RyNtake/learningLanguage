#include <stdio.h>

int main(void)
{
  int bill = 1000;
  int bev = 198;
  int milk = 138*2;
  float tax = 1.05;

  float price = (bev + milk)*tax;
  int change = (int)(bill - price);
  printf("%4d\n",change);
  return 0;
}
