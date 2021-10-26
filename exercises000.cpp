/*
Autor: Alden Merlin Fachetti Barbosa

Faça um programa que leia um valor N inteiro e calcule por meio de uma função o seu
dobro, após isso, imprima o número e o seu dobro na tela.
*/

#include <stdio.h>
#include <stdlib.h>

int dobro(int x)
{
  x = 2*x;
  return x ;
}

int main()
{
  int n;
  printf("Digite um numero\n");
  scanf("%d",&n);
  n = dobro(n);
  printf("O dobro : %d\n",n);
  return 0 ;
}
