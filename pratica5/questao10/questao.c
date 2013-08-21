/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 5 
 * Questão 10
 * 
 * Imprimir os ímpares de 1 até 100
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  int impares;

  for (impares = 1; impares <= 100; ++impares)
  {
  	if(impares % 2)
  	  printf("%d ", impares);
  }
  printf("\n");
  
  return 0;
}