/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 5
 * 
 * Algoritmo verifica se um inteiro é maior que 20, se sim soma 8 senão diminui 5;
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  int numero;
  printf("Digite um número inteiro qualquer: ");
  scanf("%d", &numero);
  if(numero > 20)
  	printf("%d\n", numero + 8);
  else 
  	printf("%d\n", numero - 5);
  
  return 0;
}