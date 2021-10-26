/*
Autor: Alden Merlin Fachetti Barbosa

O índice de massa corpórea (IMC) é calculado através da fórmula (peso/Altura²) e, segundo critério da
Organização Mundial de Saúde, classificado por categoria, a saber:
IMC < 18.5(abaixo do peso); 18.5 ≤ IMC < 25 (peso normal); IMC ³ 25 (acima do peso).
Fazer um programa C para:

  a) Ler um inteiro N (5 ≤ N ≤ 80) correspondente ao número de atletas de uma determinada
  competição desportiva. Obs.: o programa deve ficar lendo N até ser digitado um N válido.

  b) Ler, para os vetores de elementos reais ALT e PESO, as alturas e os pesos dos N atletas;

  c) Com base nos vetores lidos e utilizando uma função, calcular o IMC de cada participante e
  o número de atletas pertencentes a cada categoria “abaixo do peso”, “peso normal” ou “acima do
  peso”, em conformidade com os critérios da Organização Mundial de Saúde, descritos acima. A
  função deve ter como parâmetros os vetores ALT e PESO, o número de atletas (N), e 3 inteiros
  (NP1, NP2 e NP3) correspondentes ao número de atletas de cada categoria. Obs: NP1, NP2 e
  NP3 armazenarão o número de participantes da categoria 1 (abaixo do peso), da categoria 2
  (peso normal) e da categoria 3 (acima do peso), que devem ser passados por referência.

  d) Imprimir os valores de NP1, NP2 e NP3 como mostrado ao lado;

  Obs.1:
    Tais valores não devem ser impressos dentro da função;
  Obs.2:
    A função não deve fazer uso de variáveis globais;
  Obs.3:
    Essa questão requer o uso de ponteiros, assunto da unidade 3.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void categ(float *al,float *pe,int na, int *n1,int *n2,int *n3)
{
  int i;
  float imc;
  *(n1)=0;
  *(n2)=0;
  *(n3)=0;

  for(i=0; i<na; i++) {
    imc=pe[i]/(al[i]*al[i]);

    if (imc < 18.5) {
      *(n1)=*(n1)+1;
    }

    else if(imc < 25.0) {
      *(n2)=*(n2)+1;
    }

    else *(n3)=*(n3)+1;
  }
}

int main()
{
  float alt[80], peso[80];
  int i,np1,np2,np3,n;

  do {
    printf("Digite O numero de atletas:\n");
    scanf(" %d",&n);
  } while ((n < 5) || (n > 80));

  for(i=0; i<n; i++) {
    printf("Altura do atleta %d:\n",i+1);
    scanf(" %f",&alt[i]);
    printf("Peso do atleta %d:\n",i+1);
    scanf(" %f",&peso[i]);
  }

  categ(alt,peso,n,&np1,&np2,&np3);

  printf("Atletas abaixo do peso: %d\n",np1);
  printf("Atletas com peso normal: %d\n",np2);
  printf("Acima do peso: %d\n",np3);

  system("PAUSE");

  return 0;
}
