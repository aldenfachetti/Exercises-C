/*
Autor: Alden Merlin Fachetti Barbosa

Faça um programa que:
  a) Leia uma número N inteiro entre 3 e 10.
  b) Leia uma matriz de números reais de tamanho N x N. Obs.: Caso exista algum número
  menor que zero nesta matriz, atribua a este termo o valor zero automaticamente.
  c) Calcule e imprima a soma da diagonal principal da matriz lida, e a mesma no formato
  matricial.
*/

#include <stdio.h>

int main ()
{
  float mat[10][10];
  float somadiagonal;
  int i, j, n;

  do {
    printf ("N=?");
    scanf ("%d", &n);
  } while (n<3 || n>10);

  somadiagonal = 0;
  for (i=0; i<n; i++) {
    for (j=0; j<n; j++) {
      printf ("Digite o valor da posição %d,%d da matriz: ", i+1, j+1);
      scanf ("%f", &mat[i][j]);

      if (mat[i][j]<0)
        mat[i][j] = 0;

      if (i==j)
        somadiagonal += mat[i][j];
    }
  }

  printf ("A soma da diagonal principal da matriz e: %f\n", somadiagonal);

  for (i=0; i<n; i++) {
    for (j=0; j<n; j++) {
      printf ("%f", mat[i][j]);
      printf (" ");
    }

    printf ("\n");
  }

  return 0;
}
