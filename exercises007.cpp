/*
Autor: Alden Merlin Fachetti Barbosa

Faça um programa que leia um vetor com 5 nomes, e imprima estes nomes enumerados pela ordem em que foram digitados.
Exemplo de saída:
  1- José
  2-Carlos
  3-Marta
  4-Lucas
  5-Alex
*/

#include <stdio.h>
#include <stdlib.h>

int main( )
{
  char nomes[5][21];
  int i;
  for (i = 0; i < 5; i++)
  {
    printf("Digite o nome %d: ", i+1);
    scanf(" %s", nomes[i]);
  }
  printf("\n");
  for (i = 0; i < 5; i++)
  {
    printf("%d­ %s\n", i+1, nomes[i]);
  }
  return 0;
}
