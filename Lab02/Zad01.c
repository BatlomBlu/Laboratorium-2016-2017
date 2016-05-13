#include <stdio.h>
#define CHAR 8

void char_to_bin(int x)
{
  int tab[CHAR];
  int l=0, i=CHAR;
  
  while(x!=0)
  {
    tab[l]=x%2;
    x=x/2;
    l++;
  }
  while(i-l>0){
	  tab[i-1]=0;
	  i--;
  }
  l=CHAR;
  while(l>0){ 
    l--;
    printf("%i", tab[l]);
  }
  printf("  ");
}

int main(){
  char c;
  
  c=getchar();
  while(c!=EOF)
  {
    if(c!='\n'){
      char_to_bin(c);
    }
    c=getchar();
  }
  return 0;
}
