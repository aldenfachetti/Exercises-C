/*
Autor: Alden Merlin Fachetti Barbosa

Faça um programa que leia um vetor de inteiros X de 3 posições por meio de uma função
chamado LeVetor, após sua leitura, imprima o vetor na tela.
*/

#include <stdio.h>
#include <stdlib.h>

void LeVetor()
{
  int vetor[3],i;
  printf("Digite os elementos do vetor:\n");
  for(i = 0; i < 3; i++)
  {
    printf("Elemento %d:\n",i+1);
    scanf("%d",&vetor[i]);
  }
  printf("Vetor:\n[ ");
  for(i = 0; i < 3; i++)
  {
    printf("%d ",vetor[i]);
  }
  printf("]\n");
}

int main()
{
  LeVetor();
  return 0;
}
