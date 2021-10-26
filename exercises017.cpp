/*
Autor: Alden Merlin Fachetti Barbosa

Na primeira fase de um concurso público foram realizadas provas escritas de português,
matemática e conhecimentos gerais. Fazer um programa em C para:
  a) Ler um inteiro N no intervalo 10 < N <= 1000;

  b) Em processo repetitivo: Ler nome e notas das provas de português, matemática e conhecimentos
  gerais dos N candidatos, colocando seus valores nos vetores NOME, NOTAP, NOTAM e NOTACG, respectivamente.
  Considerando os pesos 2, 3 e 1 para as provas de português, matemática e conhecimentos gerais, respectivamente,
  calcular a média ponderada pelos pesos para todos os N candidatos, armazenando nos vetores CLAS e MEDIA,
  os nomes emédia ponderada dos candidatos classificados, ou seja, que conseguiram média >= 7,0.

  c) Calcular a média geral dos candidatos classificados (média aritmética das médias dos candidatos classificados).

  d) Imprimir a relação de todos os candidatos classificados e que conseguiram média maior ou igual à
  média geral (calculada no item c).


  Obs.:
    i. O cálculo da média ponderada pode ser realizado utilizando a seguinte fórmula:
    m = (x1p1 + x2p2+...+xnpn)/(p1+p2+...+pn), onde x corresponde à nota e p ao peso associado.

    ii. Fazer a validação do valor de N até que seja digitado um valor válido.

    iii. Se não houver nenhum candidato classificado, imprimir mensagem indicativa e não processar os itens c) e d).
*/

#include <stdio.h>

int main ()
{
  int n, i, j;
  float med, s;
  float notap[1000], notam[1000], notacg[1000], media[1000];
  char nome[1000][80], clas[1000][80];

  do {
    printf ("Digite um valor para n: ");
    scanf ("%d", &n);
  } while (n<10 || n>1000);

  j =0;
  for (i=0; i<n; i++) {
    printf ("Digite o nome do candidato %d", i+1);
    scanf ("%s", nome[i]);

    printf ("Digite as notas de portugues, matematica e conhecimentos gerais desse aluno, respectivamente: ");
    scanf ("%f%f%f", &notap[i], &notam[i], &notacg[i]);

    med = ((2 * notap[i]) + (3 * notam[i]) + notacg[i]) / 6;

    if (med>=7) {
      j = j+1;
      clas[j] = nome[i];
      media[j]=med;
    }
  }

  if (j==0)
    printf ("Não houve nenhum classificado.");

  else {
    s=0;

    for (i=0; i<j; i++)
    s += media[i];
    s /= j;

    printf ("Media dos candidatos classificados: %f", s);

    for (i=0; i<j; i++) {
      if (media[i]>s)
        printf ("%s, Media: %f", nome[i], media[i]);
    }
  }

  return 0;
}
