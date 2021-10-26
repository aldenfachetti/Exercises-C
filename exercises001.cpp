/*
Autor: Alden Merlin Fachetti Barbosa

Faça um programa que receba dois valores inteiros X e N e calcule por meio de uma
função o valor de X elevado a N, após isso imprima o resultado na tela.
*/

#include <stdio.h>
#include <stdlib.h>

int potencia(int x, int n)
{
  int i = 1 , num;
  num = x;
  if (n == 0)
  {
    num = 1;
  }
  while( i < n )
  {
    num = num * x;
    i++;
  }
  return num;
}

int main()
{
  int base,expoente,resu;
  printf("Digite a base\n");
  scanf("%d",&base);
  printf("Digite o expoente\n");
  scanf("%d",&expoente);
  resu = potencia(base,expoente);
  printf("%d elevado a %d = %d",base,expoente,resu);
  return 0 ;
}
