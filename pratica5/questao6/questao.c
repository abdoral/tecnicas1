/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 5 
 * Questão 6
 * 
 * Imprimir multiplos de 5 que estão entre 0 a 500
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  int multiplos = 0;

  for (multiplos = 0; multiplos <= 500; ++multiplos)
  {
  	if(!(multiplos % 5))
  	  printf("%d ", multiplos);
  }
  printf("\n");
  
  return 0;
}