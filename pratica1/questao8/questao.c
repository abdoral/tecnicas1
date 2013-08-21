/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 1 
 * Questão 7
 * 
 * Algoritmo para calcular o valor do aumento do salário de um funcionário;
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  float salario;
  
  printf("----------------------------------------\n");
  printf("Informe o valor do salário:");
  scanf("%f", &salario);
  printf("O aumento do salário será de: R$ %.2f reais\n", salario*0.4);
  printf("----------------------------------------\n");
  
  return 0;
}