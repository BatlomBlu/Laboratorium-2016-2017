#include <stdio.h>

void read_and_write (int n, int k, int *q, int *r){
	*q=n/k;		//iloraz
	*r=n%k;		//reszta
}

int main(){
	int r,k,n,q;
	printf("n=");
	scanf ("%i", &n);
	printf("k=");
	scanf ("%i", &k);
	while (k==0){
		printf("Podaj liczbe różną od zera!\n");
		printf("k=");
		scanf ("%i", &k);
	}
		
	read_and_write  (n, k, &q, &r);
	printf("q=%i\n",q);
	printf("r=%i\n",r);
	return 0;
}
	
