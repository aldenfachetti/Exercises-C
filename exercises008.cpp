/*
Autor: Alden Merlin Fachetti Barbosa

Faça um programa em C para ler um vetor de 10 números inteiros, calcule e imprima a média aritmética de seus elementos.
Em seguida atualize seu valor com o dobro do valor anterior, e imprima o vetor atualizado.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int vetor[10];
  int i;
  float soma = 0;

  for (i = 0; i < 10; i++)
  {
    printf("Digite o valor da posicao %d do vetor: ", i+1);
    scanf("%d", &vetor[i]);
    soma = soma + vetor[i];
    vetor[i] = vetor[i] * 2;
  }

  printf("\nO valor da media aritmetica dos elementos do vetor eh:
  %.2f\n", soma/10);

  printf("\nVetor atualizado com o dobro do seu valor:\n");

  for (i = 0; i < 10; i++)
  {
    printf("%d ", vetor[i]);
  }

  printf("\n");
  return 0;
}
