/*
Autor: Alden Merlin Fachetti Barbosa

Faça um programa em C que calcule a distância entre diferentes cidades, satisfazendo as restrições abaixo:
O programa deve ler do teclado:
  a) Um vetor de caracteres Cidades que armazene o nome de m diferentes cidades. O valor de
  m deve ser fornecido pelo usuário – validar para que o valor de m esteja no intervalo [2,10];

  b) Uma matriz Distancias m x m correspondente a distância entre as m cidades definidas no
  vetor Cidades. Obs.: Nesta matriz não o valor da diagonal principal(representado pela distância
  de uma cidade para ela mesma) deve er atribuído automaticamente como 0, ou seja, não deve
  ser permitida a digitação. Não é necessário supor que a distância entre a cidade A e B deverá ser
  igual à distância entre B e A. Por exemplo, na tabela abaixo a distância entre A e B é 90 Km, e a
  distância entre B e A é de 85 Km.

  c) O valor para a variável Consumo, correspondendo ao consumo de combustível médio do
  veículo utilizado, ou seja, quantos quilômetros este veículo percorre com um litro de combustível.

    O programa deverá calcular e apresentar na tela:
      a) Todos os percursos entre as cidades que não ultrapassem 250 Km (os percursos são
      compostos pelos nomes das cidades de origem e pelos nomes das cidades de destino).

      b) Todos os percursos (nome e cidade de origem e nome da cidade de destino), juntamente
      com a quantidade de combustível necessária para o veículo percorrê-los.


      Exemplo de saída:
        Supondo a matriz Distancias acima, o vetor Cidades com os valores A, B, C, D, e E, o Consumo
        com valor igual a 10, a saída apresentada deve ser (foram apresentados somente dois exemplos
        de saída solicitados em “a” e “b”):

          Distancia: 85 entre A e B.
          Distancia: 160 entre A e B.
          ...
          Consumo entre A e B = 8.50
          Consumo entre A e C = 28.00
*/

#include <stdio.h>

int main ()
{
  int i, j, k, m;
  float consumo, c;
  float distancias[10][10]
  char cidades[10][60];

  do {
    printf ("Digite a quantidade de cidades: ");
    scanf ("%d", &m);
  } while (m<2 || m>10);

  for (i=0; i<m; i++) {
    printf ("Digite o nome da cidade %d", i+1);
    scanf ("%s", cidades [i]);
  }

  for (i=0; i<m; i++) {
    for (j=0; j<m; j++) {
      if (i==j)
      distancias[i][j] = 0;

      else {
        printf ("Informe a distancia entre %s e %s: ", cidades[i], cidades[j]);
        scanf ("%f", &distancias[i][j]);
      }
    }
  }

  printf ("Digite um valor para o consumo medio do veiculo: ");
  scanf ("%f", &consumo);

  printf ("Distancias menores ou iguais a 250km: ");

  for (i=0; i<m; i++) {
    for (j=0; j<m; j++) {
      if (i!=j && distancia[i][j]<=250)
      printf ("De %s para %s", cidades[i], cidades[j]);
    }
  }

  for (i=0; i<m; i++) {
    for (j=0; j<m; j++) {
      if (i!=j) {
        c = (distancias[i][j]/consumo);
        printf ("Distancia: %f km entre %s e %s", distancias[i][j], cidades[i], cidades[j]);
        printf ("Consumo entre %s e %s: %f L", cidades[i], cidades[j], c);
      }
    }
  }

  return 0;
}
