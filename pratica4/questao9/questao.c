/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4
 * Questão 9
 * 
 * Algoritmo que recebe dois e verifica se um é divisivel pelo outro
 * 
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  int divisor, dividendo;
  
  printf("Informe o divisor: ");
  scanf("%d", &divisor);
  printf("Informe o dividendo: ");
  scanf("%d", &dividendo);

  if(divisor%dividendo)
  	printf("%d não é divisivel por %d\n", dividendo, divisor);
  else
  	printf("%d é divisivel por %d com valor de %d\n", dividendo, divisor, divisor/dividendo);
  
  return 0;
}