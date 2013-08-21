/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 5 
 * Questão 7
 * 
 * Imprimir os pares no intervalo de 1 a 100
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  int pares = 0;

  for (pares = 0; pares <= 100; ++pares)
  {
  	if(!(pares % 2))
  	  printf("%d ", pares);
  }
  printf("\n");
  
  return 0;
}