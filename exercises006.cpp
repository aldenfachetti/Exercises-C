/*
Autor: Alden Merlin Fachetti Barbosa

Faça um programa em C que:
  a. Crie a função FAT que recebe um número inteiro e retorna o fatorial do número.
  b. Lê do teclado um número inteiro N. Se N < 0, exiba uma mensagem de erro e peça novamente. O programa só prossegue se for digitado N ≥ 0.
  c. Imprime na tela o fatorial de N e o fatorial de N+4.

OBS. Definição matemática de fatorial: fat(0) = 1 e fat(n) = n * fat(n-1).
Exemplo. fat(5) = 5 * 4 * 3 * 2 * 1.
*/

#include <stdio.h>
#include <stdlib.h>

int FAT(int x)
{
  int f = 1,i;
  for(i = x; i > 0; i­­)
  {
    f = f*i;
  }
  return f;
}
int main()
{
  int n,fat;
  do
  {
    printf("Digite um numero:\n");
    scanf("%d",&n);
  }
  while (n < 0);

  fat = FAT(n);
  printf("Fatorial de N = %d\n",fat);
  printf("Fatorial de N + 4 = %d\n",FAT(n+4));
  return 0;
}
