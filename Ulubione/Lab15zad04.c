//Napisać program, który oblicza liczbę dni między dwiema datami, podanymi przez użytkownika. 

#include <stdio.h>

int daysCount[]={0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

int isLeapYear(int year);
int daysFromDate(int yearfrom,int monthfrom,int dayfrom);
int daysToDate(int yearto,int monthto,int dayto);
int daysPassed(int yearfrom,int monthfrom,int dayfrom,int yearto,int monthto,int dayto);

int main()
{
  int fromYYYY, fromMM, fromDD,toYYYY,toMM,toDD, days;
  printf("Podaj datę początku YYYY MM DD: ");
  scanf ("%i", &fromYYYY);
  scanf ("%i", &fromMM);
  scanf ("%i", &fromDD);
  printf("Podaj datę końca YYYY MM DD: ");
  scanf ("%i", &toYYYY);
  scanf ("%i", &toMM);
  scanf ("%i", &toDD);
  while(fromYYYY>toYYYY || (fromYYYY==toYYYY && fromMM>toMM) || (fromYYYY==toYYYY && fromMM==toMM && fromDD>toDD)){
    printf("Data początkowa nie może być póżniejsza niż końcowa!");
    printf("Podaj datę końca YYYY MM DD: ");
    scanf ("%i", &toYYYY);
    scanf ("%i", &toMM);
    scanf ("%i", &toDD);
  }
  days=daysPassed(fromYYYY, fromMM, fromDD,toYYYY,toMM,toDD);
  printf("Minęło %i dni\n",days);

  return 0;
}
  
int isLeapYear(int year){
  int isLeap=0;
  if(((year%4 == 0) && (year%100 != 0)) || (year%400 == 0))
    isLeap=1;
  return isLeap;
}
  
int daysPassed(int yearfrom,int monthfrom,int dayfrom,int yearto,int monthto,int dayto){
  int days=0;
  if(yearto-yearfrom>1){
    int yctr=yearfrom+1;
    while(yctr!=yearto){
      days+=365;
      days+=isLeapYear(yctr);
      yctr++;
    }
  }
  days+=daysFromDate(yearfrom, monthfrom, dayfrom);
  days+=daysToDate(yearto, monthto, dayto);
  if(yearto==yearfrom){
    days-=366;
    if(monthto<=2 && monthfrom>2){
      days+=isLeapYear(yearto);
    }
  }    
  return days;        
}

int daysFromDate(int yearfrom,int monthfrom,int dayfrom){
  int days=0;  
  days=365-daysCount[monthfrom-1]-dayfrom;
  if(monthfrom<3){
    if(isLeapYear(yearfrom)==1){
      days++;
    }
  }
  return days;
}

int daysToDate(int yearto,int monthto,int dayto){
  int days=0;
  days+=daysCount[monthto-1]+dayto;
  if(monthto>3){
    if(isLeapYear(monthto)==1){
      days++;
    }
  }
  return days;
}
