/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 5 
 * Questão 5
 * 
 * Imprimir de 200 a 100
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  int impressoes = 200;

  for (impressoes = 200; impressoes >= 100; --impressoes)
  {
  	printf("%d ", impressoes);
  }
  printf("\n");
  
  return 0;
}