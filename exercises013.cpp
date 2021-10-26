/*
Autor: Alden Merlin Fachetti Barbosa

Faça um programa que calcula o valor patrimonial dos produtos de uma empresa. O
programa deve ler 3 vetores com 5 elementos cada: COD (números inteiros), QUANT (números
inteiros) e VAL (números reais). Correspondentes ao código do produto, quantidade em estoque e
valor unitário. O programa deve fazer a leitura dos valores referentes a cada vetor e calcular o
valor patrimonial dos produtos, fazendo somatório da multiplicação da quantidade em estoque
pelo valor unitário, utilizando os dados armazenados nos vetores QUANT e VAL. Imprima o
Código, seguido do valor patrimonial do produto.
*/

#include <stdio.h>

int main ()
  {
  int cod[5], quant[5];
  float valor[5], vpat[5];
  int i;

  for (i=0; i<5; i++) {
    printf ("Digite o codigo, a quantidade e o valor do produto %d\n", i+1);
    scanf ("%d%d%f", &cod[i], &quant[i], &valor[i]);
    vpat[i]=(quant [i]*valor[i]);
  }

  for (i=0; i<5; i++) {
    printf ("codigo: %d, valor patrimonial: %f\n", cod[i],
    vpat[i]);
  }

  return 0;
}
