/*
Autor: Alden Merlin Fachetti Barbosa

Faça um programa que leia um valor N inteiro e, através de uma função, atualize seu valor
para N+1 e imprima na tela seu resultado.
*/

#include <stdio.h>
#include <stdlib.h>

void atualiza(int x)
{
  x = x + 1;
  printf("O novo valor de n e %d\n",x);
}

int main()
{
  int n;
  printf("Informe um valor para n:\n");
  scanf("%d",&n);
  atualiza(n);
  return 0;
}
