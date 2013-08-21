/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 5 
 * Questão 18
 * 
 * Imprimir de 1 até 100 e sua soma dos suas metades;
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  float parcelas, soma;
  soma = 0;
  for (parcelas = 1; parcelas <= 100; ++parcelas)
  {
     soma += parcelas/2;
     if(parcelas != 100)
        printf("%.0f + \n", parcelas);
     else
        printf("%.0f = %.2f\n", parcelas, soma);    
  }
  printf("\n");
  
  return 0;
}