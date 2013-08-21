/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 4
 * 
 * Algoritmo verifica se um inteiro positivo, negativo ou nulo;
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  int numero;
  printf("Digite um número inteiro qualquer: ");
  scanf("%d", &numero);
  if(numero == 0)
  	printf("O número é nulo.\n");
  else if(numero > 0)
  	printf("O número é positivo.\n");
  else if(numero < 0)
  	printf("O número é negativo.\n");
  
  return 0;
}