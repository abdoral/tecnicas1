/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 1 
 * Questão 7
 * 
 * Algoritmo para exibir o inverso do número inteiro dado;
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  int numero;
  
  printf("----------------------------------------\n");
  printf("Informe um valor inteiro:");
  scanf("%d", &numero);
  printf("O seu inverso é %d\n", ~numero +1);
  printf("----------------------------------------\n");
  
  return 0;
}