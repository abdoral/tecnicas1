/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 5 
 * Questão 17
 * 
 * Imprimir de 1 até 100 e sua soma dos seus quadrados;
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  int parcelas, soma;
  soma = 0;
  for (parcelas = 1; parcelas <= 100; ++parcelas)
  {
     soma += parcelas*parcelas;
     if(parcelas != 100)
        printf("%d + \n", parcelas);
     else
        printf("%d = %d\n", parcelas, soma);    
  }
  printf("\n");
  
  return 0;
}