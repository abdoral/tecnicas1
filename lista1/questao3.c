/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Lista de exercício 1 
 * Questão 3
 * 
 * Algoritmo para pegar um número real e imprimir com uma casa decimal.
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  float numeroReal;
  
  printf("---------------------------\n");
  printf("Entre com um número real:");
  scanf("%f", &numeroReal);
  printf("%0.1f\n", numeroReal);
  printf("---------------------------\n");
  return 0;
}