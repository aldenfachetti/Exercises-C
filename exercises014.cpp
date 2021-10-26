/*
Autor: Alden Merlin Fachetti Barbosa

Faça uma tabela que enumere as distâncias entre várias cidades, ou seja, uma matriz
simétrica: os termos em relação à diagonal principal desta matriz são iguais (Mat[i,j] = Mat[j,i]).
Obviamente a digitação de uma matriz com esta propriedade pode ser simplificada, devendo-se
digitar apenas os termos que estão acima da diagonal principal. Pede-se um programa em C
para:

  a) Ler um vetor com o nome de 5 cidades.
  b) Preencher uma matriz simétrica com a distância entre as cidades.
  c) Exibir na tela o conteúdo desta matriz.
*/

#include <stdio.h>

int main ()
{
  char cidades[5][100];
  float distancia[5][5];
  int i, j;

  for (i=0; i<5; i++){
    printf ("Informe o nome da cidade %d", i+1);
    gets (cidades[i]);
  }

  for (i=0; i<5; i++) {
    for (j=0; j<5; j++) {
      if (i==j)
        distancia[i][j] = 0;

      if (j>i){
        printf ("Digite a distancia de ");
        puts (cidades[i]);
        printf (" para ");
        puts (cidades[j]);
        scanf ("%f", &distancia[i][j]);
        distancia[j][i] = distancia[i][j];
      }
    }
  }

  for (i=0; i<5; i++) {
    puts (cidades[i]);

    for (j=0; j<5; j++) {
      printf ("%f ", distancia[i][j]);
    }

    printf ("\n");
  }

  return 0;
}
