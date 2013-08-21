/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 1
 * 
 * Algoritmo lê número de imprime caso seja maior que vinte;
 * 0.34 não imprime
 * -20 não imprime
 * 20 não imprime
 * 20.01 imprime
 *22 imprime
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  float numero;
  printf("Digite um número qualquer: ");
  scanf("%f", &numero);
  if(numero > 20) {
 	printf("%f\n", numero);
  }
  
  return 0;
}