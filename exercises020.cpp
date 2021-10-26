/*
Autor: Alden Merlin Fachetti Barbosa

Faça um programa em C que:
  a) Crie uma função DOBRAVETOR que recebe 2 parâmetros: 1 vetor de inteiros e um número inteiro
  representando o tamanho do vetor. A função multiplica cada elemento do vetor por 2;

  b) Le do teclado um vetor de inteiros de tamanho 4;

  c) Imprime na tela os elementos do vetor multiplicados por 2 e multiplicados por 4
*/

#include <stdio.h>
#include <stdlib.h>

void dobra(int v[], int n)
{
  int i;
  for(i=0; i<n; i++) {
    v[i] = v[i]*2;
  }
}

int main()
{
  int vetor[4],i;

  printf("Digite os 4 elementos do vetor:\n");

  for(i=0; i<4; i++) {
    printf("Elemento da posicao %d:\n",i);
    scanf(" %d",&vetor[i]);
  }

  dobra(vetor,4);

  for(i=0; i<4; i++) {
    printf("%d ",vetor[i]);
  }
  printf("\n");

  dobra(vetor,4);

  for(i=0; i<4; i++) {
    printf("%d ",vetor[i]);
  }

  system("PAUSE");
  
  return 0;
}
