/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 3
 * 
 * Algoritmo verifica se um inteiro dado é par ou ímpar
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  int numero;
  printf("Digite um número inteiro qualquer: ");
  scanf("%d", &numero);
  if(numero & 1)
  	printf("O número é ímpar.\n");
  else
  	printf("O número é par.\n");
  
  return 0;
}