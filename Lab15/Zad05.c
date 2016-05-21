//Napisać program, który wczytuje datę (dzień, miesiąc, rok) i podaje wypadający wtedy dzień tygodnia.

#include <stdio.h>

char *week[] ={"poniedzialek", "wtorek", "sroda", "czwartek", "piatek", "sobota", "niedziela"};
int isLeapYear(int year);
int dayOfWeek(int year, int month, int day);

int main()
{
	int YYYY, MM, DD, day;
	printf("Podaj datę YYYY MM DD: ");
	scanf ("%i", &YYYY);
	scanf ("%i", &MM);
	scanf ("%i", &DD);
	day=dayOfWeek(YYYY,MM,DD);
	printf("\nTen dzień to %s\n", week[day]);
	
	return 0;
}
	
int isLeapYear(int year){
	int isLeap=0;
	if(((year%4 == 0) && (year%100 != 0)) || (year%400 == 0))
		isLeap=1;
	return isLeap;
}
	
int dayOfWeek(int year, int month, int day){
	int daysCount[]={0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
	int dayOfYear=day+daysCount[month-1]-1;
	
	if (isLeapYear(year)==1 && month>=3){
		dayOfYear++;
	}
	int x=((year-1)%100);

	day=((((((year-1-x)/100)%4)*5)+x+(x/4))%7);
	day+=dayOfYear;
	day=day%7;
		
	return day;
}
