#include <stdio.h>

int main()
{
  short s=32767;
  short s2=1;
  short se=s+s2;
  printf("Short: %i + %i = %i\n", s,s2, se);

  int i=-2147483648;
  int i2=1;
  int ie=i-1;
  printf("Int: %i - %i = %i\n", i,i2, ie);

  long l=36028797018963968; 
  long l2=256;
  long le=l*l2;
  printf("Long: %li * %li = %li\n", l,l2, le);

  long ll=9223372036854775798;
  long ll2=10;
  long lle = ll+ll2;
  printf("Long long: %li + %li = %li\n", ll,ll2, lle);

  float fl=0.00001;
  float fl2=20;
  float fle=fl/fl2;
  printf("Float: %f / %f = %f\n", fl,fl2, fle);

  double d=0.000001;
  double d2=2.0;
  double de=d/ d2;
  printf("Double: %f / %f = %f\n", d, d2, de);

  long double ld=0.000009;
  long double ld2=19.0;
  long double lde=ld/ld2;
  printf("Long double: %Lf / %Lf = %Lf\n", ld,ld2, lde);
  
  return 0;
}
