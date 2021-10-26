/*
Autor: Alden Merlin Fachetti Barbosa

Faça um programa em C que identifica os corredores classificados para os jogos olímpicos.
O programa deve ler do teclado:
  a) Receber o número t de corredores participantes, no intervalo de [2, 20].

  b) O nome de cada atleta deverá ser lido do teclado ser armazenado num vetor.

  c) O valor para a variável real limite, também deverá ser lido do teclado. Esta variável
  corresponde ao tempo máximo permitido para alcançar a classificação para as olimpíadas (ex. 7s e 20ms).

  d) Cada atleta terá direito a três tomadas de tempo. Armazenar os tempos dos corredores
  numa matriz t x 3, na qual cada linha identifica um atleta e cada coluna seu respectivo tempo.

O programa deverá apresentar na tela:
  a) O nome e menor tempo de cada atleta classificado para as olimpíadas.

  Ex.: Lista de Classificados – Tempo limite 14 segundos.
  - João com o tempo de 12 segundos e 0 milésimos de segundo.
  - Fernando com o tempo de 13 segundos e 450 milésimos de segundo.

  b) A mensagem “Não há nenhum atleta classificado.”
  Deverá ser exibida caso nenhum atleta atinja o índice olímpico.
*/

#include <stdio.h>

int main ()
{
  int t, i, j, k, cont, seg, mili;
  float limite, menor;
  float m[20][3];
  char nome[20][60];

  do {
    printf ("Informe o numero de participantes (entre 2 e 20): ");
    scanf ("%d", &t);
  } while (t<2 || t>20);

  for (i=0; i<t; i++) {
    printf ("Informe o nome do participante %d:", i+1);
    gets (nome[i]);
  }

  printf ("Informe o tempo maximo para a classificacao para os jogos olimpicos: ");
  scanf ("%f", &limite);

  for (i=0; i<t; i++) {
    for (j=0; j<3; j++) {
      printf ("%s . tempo %d\n", nome[i], j+1);
      scanf ("%f", &m[i][j]);
    }
  }

  cont =0;
  printf ("Lista de classificados ­ tempo limite: %f segundos", limite);

  for (i=0; i<t; i++) {
    for (j=0; j<3; j++) {
      if (m[i][j]<limite) {
        cont+= 1;
        menor = m[i][j];

        for (k=1; k<3; k++) {
          if (menor>m[i][k])
            menor = m[i][k];
        }

        seg = menor;
        mili = (menor - seg) * 100;

        printf ("%s com o tempo de %d segundos e %d milésimos de segundo.", nome[i], seg, mili);
      }
    }
  }

  if (cont==0)
    printf ("Não há nenhum classificado.");

  return 0;
}
