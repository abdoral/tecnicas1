/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Lista de exercício 1 
 * Questão 4
 * 
 * Algoritmo para pegar um inteiro e imprimir seu triplo, seu quadrado e seu meio
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  int numero;
  
  printf("----------------------\n");
  printf("Entre com um número inteiro:");
  scanf("%d", &numero);
  printf("Triplo: %d; Quadrado: %d; Meio: %d.\n", numero*3, numero*numero, numero/2);
  printf("----------------------\n");
  
  return 0;
}