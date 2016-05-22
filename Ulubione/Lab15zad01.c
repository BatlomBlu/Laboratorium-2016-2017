//Gracze (człowiek i komputer) piszą na przemian liczby 1 lub 2 lub 3 (innych nie wolno); wszystkie napisane liczby są sumowane. Wygrywa ten gracz, który napisze taką liczbę, że suma wyniesie 20.
//Napisać program, który możliwie dobrze gra w tą grę.

#include <stdio.h>

void aiFirst();
void manFirst();

int main(){
  int choice=0;
  printf("==========================================\n");
  printf("CZŁOWIEK PIERWSZY 0 || KOMPUTER PIERWSZY 1\n");
  printf("==========================================\n");
  printf("Twój wybór: ");
  scanf ("%i", &choice);
  while(choice!=0 && choice!=1){
	   printf("Niepoprawny wybór, wybierz ponownie: \n");
	   scanf ("%i", &choice);
  }
  printf("\n");
  if (choice==0){
    manFirst();
  }
  else if (choice==1){
    aiFirst();
  }
  return 0;
}

void aiFirst(){
  int ai, man=0, sum=0;
  while (sum<20){
    if (4-(sum%4)<4){
      ai=4-(sum%4);
    }
    else
      ai=2;
    printf("komputer:%i ", ai);
    sum+=ai;
    if (sum==20){
      printf("            (suma %i)\n",   sum);
      printf("KONIEC GRY, WYGRAŁ KOMPUTER\n");
      break;
    }
    printf("człowiek: ");
    scanf ("%d%*c", &man);
    while(man<1 || man>3){
      printf("niepoprawna liczba, ");
      printf("podaj liczbę: ");
      scanf ("%d", &man);
    }
    sum+=man;
    if (sum==20){
      printf(" (suma %i)\n", sum);
      printf("KONIEC GRY, WYGRAŁ CZŁOWIEK\n");
      break;
    }
    printf(" (suma %i)\n", sum);
  }
}

void manFirst(){
  int man, sum=0;
  
  while (sum<20){
    printf("podaj liczbę od 1 do 3: ");
    scanf ("%i", &man);
    if(man<1 || man>3){
      printf("niepoprawna liczba\n");
    }
    else{
      sum+=man;
      if (sum==20){
        printf("człowiek:%i            (suma %i)\n", man,  sum);
        printf("KONIEC GRY, WYGRAŁ CZŁOWIEK\n");
        break;
      }
      sum+=4-man;
      printf("człowiek:%i komputer:%i (suma %i)\n", man, 4-man, sum);
      if (sum==20)
          printf("KONIEC GRY, WYGRAŁ KOMPUTER\n");
    }
  }
}
