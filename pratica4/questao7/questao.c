/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 7
 * 
 * Algoritmo recebe um número e imprime se é ou não multiplo de 3;
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int numero;
  printf("Digite um número inteiro qualquer: ");
  scanf("%d", &numero);
  if(numero % 3)
  	printf("Não é múltiplo de 3.\n");
  else 
  	printf("É múltiplo de 3.\n");
  
  return 0;
}