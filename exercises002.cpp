/*
Autor: Alden Merlin Fachetti Barbosa

Faça um programa que leia um valor n inteiro e calcule por meio de uma função o seu
dobro, após isso, imprima o resultado na tela.
*/

#include <stdio.h>
#include <stdlib.h>

int dobro(int x)
{
  x = 2*x;
  return x;
}

int main()
{
  int n;
  printf("Informe um valor para n:\n");
  scanf("%d",&n);
  n = dobro(n);
  printf("O seu dobro e %d\n",n);
  return 0;
}
