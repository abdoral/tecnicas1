/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 5 
 * Questão 3
 * 
 * Imprimir de 100 a 1
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  int impressoes = 100;

  for (impressoes = 100; impressoes >= 0; --impressoes)
  {
  	printf("%d ", impressoes);
  }
  printf("\n");
  
  return 0;
}