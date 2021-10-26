/*
Autor: Alden Merlin Fachetti Barbosa

Uma conta corrente bancária é composta por dois códigos: Código de Agência, com 4
dígitos, e código de conta, com 6 dígitos. Além de um dígito verificador para a agência e outro
para a conta. Para se certificar de que os códigos foram digitados corretamente, é feita a
comparação do dígito verificador (DV) por um outro dígito calculado (DC). O cálculo do DC é feito
nos algarismos do código correspondente multiplicando-se os algarismos do código pelos
números primos (1,2,3,5,7,11) e o resto da divisão da soma por 9, como mostrado abaixo:

  • Código da conta digitado = 250126, dígito verificador digitado (DV) = 7
  • Soma dos produtos dos algarismos do código da conta pelos números primos: SP = 2*1 + 5*2 + 0*3 + 1*5 + 2*7 + 6*11 = 97
  • Dígito verificador calculado (DC = resto da divisão de SP por 9) = 7
  • Como o dígito verificador DV é igual a DC, conclui-se que a conta foi digitada corretamente. Para o código da agência (4 dígitos), utilizam-se apenas os primos 1,2,3 e 5.

Fazer um programa C que utilize 3 vetores: Um para o código da agência (CA); Outro para o
código da conta (CC); Outro para os números primos (NP), conforme os passos abaixo:

  a) Construir o vetor NP com números primos 1,2,3,5,7 e 11;
  b) Ler os algarismos do código da agência para o vetor CA e o dígito verificador DV do código da agência;
  c) Calcular o dígito verificador calculado, DC, utilizando os 4 primeiros elementos de NP;
  d) Se DV != DC, emitir mensagem de erro e encerrar o programa;
  e) Ler os algarismos do código da conta para o vetor CC e o dígito verificador DV do código da conta;
  f) Calcular o dígito verificador calculado, DC;
  g) Se DV != DC, emitir mensagem de erro e encerrar o programa;
  h) Se os códigos da agência e da conta foram digitados corretamente, imprimir os mesmos e a mensagem “Foram digitados corretamente”.’
*/

#include <stdio.h>

int main ()
{
  int ca[4];
  int cc[6];
  int np[6];
  int i, dv, dc, sp;
  np[0] = 1;
  np[1] = 2;
  np[2] = 3;
  np[3] = 5;
  np[4] = 7;
  np[5] = 11;
  sp = 0;

  for (i=0; i<4; i++) {
    printf ("Digite o algarismo %d do codigo da agencia: ", i+1);
    scanf ("%d",& ca[i]);

    sp += (ca[i]*np[i]);
  }

  printf ("Digite o digito verificador do codigo de agencia:");
  scanf ("%d", &dv);

  dc = sp%9;
  if (dc==dv) {
    sp = 0;

    for (i=0; i<6; i++) {
      printf ("Digite o algarismo %d do codigo da conta: ", i+1);
      scanf ("%d", &cc[i]);

      sp += (cc[i]*np[i]);
    }

    dc = sp%9;

    printf ("Digite o digito verificador do codigo de conta:");
    scanf ("%d", &dv);

    if (dc==dv)
      printf ("Foram digitados corretamente.");
      
    else
      printf ("Codigo de conta e verificador incompativeis.");
  }

  else
    printf ("Codigo de agencia e digito verificador incompativeis.");

  return 0;
}
