/*
Autor: Alden Merlin Fachetti Barbosa

Uma vendedora de frutas quer analisar como foi sua venda no dia. Supondo que ela venda
por gramas, faça um programa em C que:

  a) Leia um número N correspondente ao número de vendas do dia (10 <= N <= 1.000).
  b) Leia um vetor de números reais chamado Peso, correspondente ao peso de uma
das vendas.

  Calcule e imprima:
    a) O peso médio das vendas.
    b) O maior e o menor peso vendidos.
    c) Supondo que 1 kg custe R$ 4.35, imprima quando foi arrecadado no dia.
*/

#include <stdio.h>

int main ()
{
  int n, i, aux;
  float soma, maior, menor, auxr;
  float peso[1000];

  do {
    printf ("Digite o numero de vendas (entre 10 e 1000):");
    scanf ("%d", &n);
  } while (n<10 || n>1000);

  for (i=0; i<n; i++) {
    aux = i+1;
    printf ("Digite o valor do peso da venda %d\n", aux);
    scanf ("%f", &peso[i]);

    if (i==0) {
      maior = peso[i];menor = peso[i];
      soma = peso[i];
    }

    if (i>0) {
      maior = maior > peso[i] ? maior :peso[i];
      menor = menor < peso[i] ? menor :peso[i];
      soma += peso[i];
    }
  }

  auxr = (soma/n);
  printf ("O peso medio das vendas e: %f", auxr);
  printf ("O maior peso vendido foi: %f", maior);
  printf ("O menor peso vendido foi: %f", menor);

  auxr = (soma/1000)*4.35;
  
  printf ("A arrecadação total foi de R$ %f", auxr);
  return 0;
}
