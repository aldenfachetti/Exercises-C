/*
Autor: Alden Merlin Fachetti Barbosa

O Comitê da Copa do Mundo 2014 cadastrou todos os jogadores com dados referentes aos atletas que
vão participar da copa, incluindo: país que representa, o nome e a altura dos jogadores.
Fazer um programa em C para executar os seguintes passos:
  a) Ler os dados referentes aos jogadores conforme especificação abaixo, armazenando-os nos vetores
  PAIS, NOME e ALTURA. País do atleta, com 3 caracteres literais; Nome do atleta, com 15 caracteres
  literais e Altura do atleta, com valor real;
    OBS.:
      1 – Considerar um máximo de 800 atletas na competição;
      2 – Os dados devem ser digitados via teclado, atleta por atleta, até que seja digitado ‘ZZZ’
      para o código do país (este dado não pertence a nenhum atleta e serve apenas para indicar
      o final da entrada de dados).

  b) Após a digitação dos dados, calcular a altura média dos atletas cadastrados, imprimindo, na tela,
  o valor calculado;

  c) Listar, na tela, a relação dos jogadores do Brasil (código do país ‘BRA’) que tenham altura maior
  ou igual à média geral calculada anteriormente;
*/

#include <stdio.h>

int main ()
{
  int i, j;
  float altura, media;
  float alt[800];
  char nome[800][16], pais[800][4];

  printf ("Digite XXX");
  scanf ("%s", pais[0]);

  i=0;
  altura=0;

  while (pais[i] != 'ZZZ') {
    printf ("Entre o pais: ");
    scanf ("%s", pais[i]);

    if (pais[i]!= 'ZZZ') {
      printf ("Entre o nome: ");
      scanf ("%s", nome[i]);

      printf ("Entre a altura: ");
      scanf ("%f", &alt[i]);

      altura += alt[i];
      i +=1;
    }
  }

  media = (altura/i);
  j=1;

  while (j<=i) {
    if (alt[j]>media && pais[j] = 'BRA')
    printf ("%s", nome[j]);
    j += 1;
  }

  return 0;
}
