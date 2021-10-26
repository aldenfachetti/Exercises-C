/*
Autor: Alden Merlin Fachetti Barbosa

Faça um programa para ler 2 vetores A e B com 5 elementos reais e construir um terceiro
vetor S obtido com os valores comuns a A e B. Ao final, imprimir os 3 vetores.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  float A[5], B[5], S[5];
  int i, j, k = 0;

  for (i = 0; i < 5; i++)
  {
    printf("Digite o valor de A[%d] e de B[%d]: ", i+1, i+1);
    scanf("%f %f", &A[i], &B[i]);
  }

  for (i = 0; i < 5; i++)
  {
    for (j = 0; j < 5; j++)
    {
      if (A[i] == B[j])
      {
      S[k] = A[i];
      k++;
      }
    }
  }

  printf("\nVetor A: ");
  for (i = 0; i < 5; i++) {
    printf("%.2f ", A[i]);
  }

  printf("\nVetor B: ");
  for (i = 0; i < 5; i++){
    printf("%.2f ", B[i]);
  }

  printf("\nVetor S: ");
  for (i = 0; i < k; i++)
  {
    printf("%.2f ", S[i]);
  }

  printf("\n");
  return 0;
}
