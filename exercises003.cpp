/************************************************************************************************************
Autor: Alden Merlin Fachetti Barbosa

Proposta – Soma Valores Entre Dois Inteiros:

Ler dois valores inteiros, calcular e escrever a soma dos inteiros existentes entre os dois valores lidos
(incluindo os valores lidos na soma). Considere que o primeiro pode ser menor que o segundo e vice-versa.

Entradas:
    - dois números inteiros a e b (int)
Saída:
    - soma inteira x dos numeros que são >=a e <=b, sendo que a é o menor número informado e b o maior.
Pré-condições:
    - devemos conferir qual é o menor e o maior número informado, antes de determinar a soma do intervalo [a,b]
*/

#include <stdio.h> //biblioteca para manipulação de entrada/saida
#include <stdlib.h> //biblioteca para usarmos EXIT_SUCCESS

int CalculaSomaIntervalo(int a, int b){
  int soma = 0, i; //soma será a variável suada para somar os números do intervalo e i é o contador do for
  for(i = a; i <= b; i++){ //o primeiro número a ser somado é a. enquanto i (valor inicial a) não chegar a b, continuará somando
    soma += i; //soma = soma + i
  } //quando chegarmos aqui, i é maior que b e por tanto não está em nosso intervalo
  return soma; //retornaremos  resultado
}

int main()
{
  int num1, num2;

  printf("\nInforme os dois numeros do intervalo: ");
  scanf("%d %d", &num1, &num2); //grava 2 números inteiros nos endereços das variaveis em questão, na ordem em que foram informados

  if(num1 < num2){// se a<b o intervalo é [a,b]
    printf("\nA soma do intervalo [%d,%d] = %d", num1, num2, CalculaSomaIntervalo(num1, num2));//imprime o resultado da soma do intervalo [num1,num2]
  }
  else{ //caso contrário o intervalo é [b,a]
    printf("\nA soma do intervalo [%d,%d] = %d", num2, num1, CalculaSomaIntervalo(num2, num1));//
  }

  return EXIT_SUCCESS;
}
