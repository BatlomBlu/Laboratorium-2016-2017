//Napisać program   od_konca.c , którego wywołanie z argumentami spowoduje wypisanie tych argumentów w odwrotnej kolejności. Np. wywołanie
//./od_konca  Ty. gdzie tam, zawsze tam, Byc
//wydrukuje tekst
//Byc tam, zawsze tam, gdzie Ty.

#include <stdio.h>

void write_from_end(char* arg[ ], int count, char separator);

int main (int count, char* arg[ ]) {	
  write_from_end(arg,count,' ');
  return 0;
}

void write_from_end(char* arg[ ], int count, char separator){
  int i=count;
  
  printf("%s", arg[i-1]);
  for(i=count-1; i>1; i--){	
    printf("%c", separator);
    printf("%s", arg[i-1]);      
  }  
  printf("\n");
}
