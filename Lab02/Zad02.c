#include <stdio.h>

int main() {
  int x;
  printf("Podaj liczbe: \n");
  scanf("%d",&x);
  int d = (x & 0x0000001F);
  int m = (x & 0x000001E0) >> 5;
  int y = (x & 0xFFFFFE00) >> 9;
  printf("Data %d.%d.%d\n",d,m,y);
  return 0;
}
