/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 28
 * 
 * Determinar a porcetagem de lucro a partir do valor de custo de um produto
 *
 *
 *   Valor               Lucro  
 *  ---------------   | ------------
 *  valor < 10        |  Lucro de 70%
 *  10 <= valor < 30  |  Lucro de 50%
 *  30 <= valor < 50  |  Lucro de 40%
 *  valor >= 50       |  Lucro de 30%
 *
 * teste 1 => valor 5   => venda 8.5
 * teste 2 => valor 20  => venda 30
 * teste 3 => valor 45  => venda 63
 * teste 4 => valor 100 => venda 130
 * teste 5 => valor 10  => venda 15
 * teste 6 => valor 50  => venda 65
 */

#include <stdio.h>
#include <stdlib.h>

/*faixas de valores*/
#define CUSTO1 10
#define CUSTO2 30
#define CUSTO3 50

/*faixa de lucro*/
#define LUCRO1 0.7
#define LUCRO2 0.5
#define LUCRO3 0.4 
#define LUCRO4 0.3 

int main() {
  float valor;

  printf("Informe valor do produto: ");
  scanf("%f", &valor);
  if(valor < CUSTO1)
    printf("Comum custo de %.2f, o valor de venda deve ser de %.2f.\n", valor, valor + valor*LUCRO1);
  else if(valor < CUSTO2)
    printf("Comum custo de %.2f, o valor de venda deve ser de %.2f.\n", valor, valor + valor*LUCRO2);
  else if(valor < CUSTO3)
    printf("Comum custo de %.2f, o valor de venda deve ser de %.2f.\n", valor, valor + valor*LUCRO3);
  else
    printf("Comum custo de %.2f, o valor de venda deve ser de %.2f.\n", valor, valor + valor*LUCRO4);
  
  
  return 0;
}