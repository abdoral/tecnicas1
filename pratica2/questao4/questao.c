/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 2 
 * Questão 3
 * 
 * Algoritmo que exibe a tabela verdade da função OU exclusivo; 
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("----------------------------------------\n");
  printf("====>Tabela Verdade XOR<====\n");
  printf("0 XOR 0 = %d\n",0^0);
  printf("0 XOR 1 = %d\n",0^1);
  printf("1 XOR 0 = %d\n",1^0);
  printf("1 XOR 1 = %d\n",1^1);
  printf("----------------------------------------\n");
  
  return 0;
}
