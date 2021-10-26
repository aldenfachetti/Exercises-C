/*
Autor: Alden Merlin Fachetti Barbosa

Faça um programa que:
  a) Leia uma matriz 3x3 de números inteiros.
  b) Imprima-a em formato matricial.
  c) Leia um número inteiro k.
  d) Atualize a matriz com seu valor multiplicado por k, e imprima-a no formato matricial.
*/

#include <stdio.h>

int main ()
{
  int i, j, k;
  int mat [3][3];

  for (i=0; i<3; i++) {
    for (j=0; j<3; j++) {
      printf ("Digite o valor da posicao %d, %d: ", i+1, j+1);
      scanf ("%d", &mat[i][j]);
    }
  }

  for (i=0; i<3; i++) {
    for (j=0; j<3; j++){
      printf ("%d", mat[i][j]);
      printf (" ");
    }

    printf ("\n");
  }

  printf ("Digite um valor k para multiplicar a matriz: ");
  scanf ("%d", &k);

  printf ("O valor da matriz atualizada e:\n");
  for (i=0; i<3; i++) {
    for (j=0; j<3; j++) {
      mat[i][j] *= k;
      printf ("%d", mat[i][j]);
      printf (" ");
    }

    printf ("\n");
  }

  return 0;
}
