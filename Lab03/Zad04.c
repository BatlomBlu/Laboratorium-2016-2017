
#include <stdio.h>

int main()
{
  printf("FLOAT:\n");
  float x=1.0;
  while(1.0+x>1.0)
  {
    x=x/2.0;
  }
  printf("ziarno: %e\n\n", x);

  printf("DOUBLE:\n");
  double y=1.0;
  while(1.0+y>1.0)
  {
    y=y/2.0;
  }
  printf("ziarno: %e\n\n", y);

  printf("LONG DOUBLE:\n");
  long double z=1.0;
  while(1.0+z>1.0)
  {
    z=z/2.0;
  }
  printf("ziarno: %Le\n\n", z);
  
  return 0;
}
