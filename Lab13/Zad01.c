#include <stdio.h>
#include <stdlib.h>

double *MATRIX, *TMATRIX;
int n, k;

void read(double *M); 
void transposition(double *X, double *Y);
void print_matrix(double *X, int w, int z);

int main() {
  printf("Podaj szerokość macierzy: ");
  scanf("%i",&k);
  while(k<=0){
    printf("Bledny rozmiar, podaj ponownie: ");
    scanf("%i",&k);
  }
  printf("Podaj wysokość macierzy: ");
  scanf("%i",&n);
  while(n<=0){
    printf("Bledny rozmiar, podaj ponownie: ");
    scanf("%i",&n);
  }
  MATRIX = (double*) malloc( sizeof(double) * n * k );
  TMATRIX = (double*) malloc( sizeof(double) * n * k );
  read(MATRIX);
  transposition(MATRIX, TMATRIX);
  printf("\nWczytana macierz: ");
  print_matrix(MATRIX, n, k);
  printf("\nTranspozyvcja: ");
  print_matrix(TMATRIX, k, n);
  free(MATRIX);
  free(TMATRIX);
  printf("\n");
  return 0;
}

void read(double *MTX) {
  int x, y;
  for (y=0; y<n; y++) {
    printf("Podaj %i liczb w wierszu %i: ", k, y+1);
    for (x=0; x<k; x++) {
      scanf("%lf", &MTX[y * k + x]);    
    }
  }
}

void transposition(double *FROM, double *TO) {
  int x, y;
  for (y=0; y<n; y++) {
    for (x=0; x<k; x++) {
      TO[ x * n + y ] = FROM[ y * k + x ];
    }
  }
}
void print_matrix(double *MTX, int w, int z) {
  int x, y;
  for (y=0; y<w; y++) {
    printf("\n");
    for (x=0; x<z; x++) {
      printf("%g ", MTX[ y * z + x ]);
    }
  }
  printf("\n");
}
