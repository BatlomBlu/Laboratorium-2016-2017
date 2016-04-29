
#include <stdio.h>
#define CZYT(a, b) printf("Podaj wartosc "#a": "); scanf("%"#b, &a);

int main (){
  double b;
  int a;

  CZYT(b, lf);
  CZYT(a, i);
  
 return 0;
}
