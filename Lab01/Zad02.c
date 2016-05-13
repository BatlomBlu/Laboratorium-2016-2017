#include<stdio.h>

int main()
{
  char x;
  x=getchar();
  while(x != EOF)
  {
    printf("%c", x);
    x=getchar();
  }
}
