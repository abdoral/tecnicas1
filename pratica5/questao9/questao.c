/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 5 
 * Questão 9
 * 
 * Imprimir o quadrado dos números de 1 a 20
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  int quadrados;

  for (quadrados = 1; quadrados <= 20; ++quadrados)
  {
     printf("%d ", quadrados*quadrados);
  }
  printf("\n");
  
  return 0;
}