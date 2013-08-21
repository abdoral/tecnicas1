/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 1 
 * Questão 7
 * 
 * Algoritmo para calcular o salário de um professor passando o valor da aula, quantidade de aulas e o número de dias trabalhados, 
 * dar o salário com o desconto do INSS.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define FAIXA_1 1247.70
#define FAIXA_2 2079.50
#define FAIXA_3 4159.00 
#define DESCONTO_UNICO 457.49 


int main() {
  
  float valorAula, salario, desconto;
  int diasTrabalhados, qtdAulas;
  
  printf("----------------------------------------\n");
  printf("Informe o valor da aula:");
  scanf("%f", &valorAula);
  printf("Informe a quantidade de aulas:");
  scanf("%d", &qtdAulas);
  printf("Informe a quantidade de dias trabalhados:");
  scanf("%d", &diasTrabalhados);
  salario = valorAula*qtdAulas*diasTrabalhados;
  
  /*desconto de 8% na primeira faixa*/
  if(salario <= FAIXA_1) {
     desconto = salario*8/100;
  }
  /*desconto de 9% na faixa 2*/
  if(salario > FAIXA_1 && salario <=FAIXA_2) {
     desconto = salario*8/100;
  }
  /*desconto de 11% na faixa 3*/
  if(salario > FAIXA_2 && salario <= FAIXA_3) {
     desconto = salario*11/100;
  }
  /*desconto fixo para valores acima da faixa 3*/
  if(salario > FAIXA_3) {
     desconto = DESCONTO_UNICO;
  }

  printf("O salário do professor será de: R$ %.2f reais, com um desconto de R$ %.2f reais \n valor a receber de R$ %.2f reais\n",
          salario, desconto, salario-desconto);
  printf("----------------------------------------\n");
  
  return 0;
}