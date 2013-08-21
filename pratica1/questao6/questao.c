/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 1 
 * Questão 6
 * 
 * Algoritmo para realizar adição, subtração, multiplicação e divisão de dois valores.
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  float var1, var2;
  
  printf("----------------------------------------\n");
  printf("Informe um valor numérico:");
  scanf("%f", &var1);
  printf("Informe outro valor numérico:");
  scanf("%f", &var2);
  printf("Adição: %f\n", var1+var2);
  printf("Subtração: %f\n", var1-var2);
  printf("Multiplicação: %f\n", var1*var2);
  printf("Divisão: %f\n", var1/var2);
  printf("----------------------------------------\n");
  
  return 0;
}