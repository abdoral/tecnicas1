/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 1 
 * Questão 7
 * 
 * Algoritmo para calcular o salário de um professor passando o valor da aula, quantidade de aulas e o número de dias trabalhados;
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  float valorAula;
  int diasTrabalhados, qtdAulas;
  
  printf("----------------------------------------\n");
  printf("Informe o valor da aula:");
  scanf("%f", &valorAula);
  printf("Informe a quantidade de aulas:");
  scanf("%d", &qtdAulas);
  printf("Informe a quantidade de dias trabalhados:");
  scanf("%d", &diasTrabalhados);
  printf("O salário do professor será de: R$ %.2f reais\n", valorAula*qtdAulas*diasTrabalhados);
  printf("----------------------------------------\n");
  
  return 0;
}