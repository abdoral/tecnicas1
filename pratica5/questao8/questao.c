/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 5 
 * Questão 8
 * 
 * Imprimir os 100 primeiros impares
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  int impares = 1;
  int contador = 100;

  while(contador >= 0) {
  	if(impares % 2){
  	   printf("%d ", impares);
  	   impares++;
  	   contador--;
  	} else
  	   impares++;
  }
  printf("\n");
  
  return 0;
}