#include <stdio.h>

int TAB[7];

int main(){
	long long liczba = 0;
	int reszta, i=0;
	printf ("Podaj liczbę: ");
	scanf ("%lli", &liczba);
	while (liczba>1){
		reszta=liczba%1000;
		TAB[i]=reszta;
		liczba/=1000;
		i++;
	}
	for(;i--;i>0){
		if(i>=1){	
			printf("%i_",TAB[i]);
		}
		else 
			printf("%i\n",TAB[i]);
	}
	return 0;
}
