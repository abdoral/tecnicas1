/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 8
 * 
 * Algoritmo recebe um número e verifica se é ou não divisivel por cinco
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int numero;
  printf("Digite um número inteiro qualquer: ");
  scanf("%d", &numero);
  if((numero % 5) == 0)
  	printf("É divisível por 5.\n");
  else 
  	printf("Não é divisível po 5.\n");
  
  return 0;
}