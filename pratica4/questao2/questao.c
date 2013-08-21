/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 2
 * 
 * Algoritmo lê dois inteiros, se a soma for maior que 10 imprime
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  float numero1, numero2;
  printf("Digite um número qualquer: ");
  scanf("%f", &numero1);
  printf("Digite outro número qualquer: ");
  scanf("%f", &numero2);
  if(numero1 + numero2 > 10) {
 	printf("%f\n", numero1 + numero2);
  }
  
  return 0;
}