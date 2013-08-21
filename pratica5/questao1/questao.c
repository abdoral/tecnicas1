/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 5 
 * Questão 1
 * 
 * Imprimir de 0 a 50
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  int impressoes  = 0;

  for (impressoes = 0; impressoes <= 50; ++impressoes)
  {
  	printf("%d ", impressoes);
  }
  printf("\n");
  
  return 0;
}