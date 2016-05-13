#include<stdio.h>

int main()
{
  int a,b,c,d;
  int i,N=5;

  a = b = c = d = 0;
  printf(" a = b = c = d = 0 :: ");
  printf("a==%i, b==%i, c==%i, d==%i\n",a,b,c,d);
  printf("\n");
	
  int A[N];
    for (i=0; i<N; A[i++]=i){
      printf("for (i=%i; i<N; a[i++]=i) :: ", i);
        printf("A[%i]\==%i\n",i,A[i]);
    }
    printf("\n");

    for (i=0; i<N; A[++i]=i){
      printf("for (i=%i; i<N; a[++i]=i) :: ", i);
      printf("A[%i]\==%i\n",i,A[i]);
    }
    printf("\ni==1\n");
    
    i=1; while ((i*=2)<N){
		printf("while ((i*=2)<N) :: i==%i\n",i);
	}
    
    
 return 0;
}
