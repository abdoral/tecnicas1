/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4
 * Questão 11
 * 
 * Algoritmo que recebe um número e informa se ele é divisivel por 3 e 7;
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  int numero;
  
  printf("Informe um número: ");
  scanf("%d", &numero);

  if(!(numero%3 || numero%7))
    printf("%d é divisivel por 3 e 7\n", numero);
  else
    printf("%d não é divisivel por 3 e 7\n", numero);

  return 0;
}