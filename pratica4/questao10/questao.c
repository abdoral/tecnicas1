/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4
 * Questão 10
 * 
 * Algoritmo que imprime o maior e o menor de dois números dados
 * 
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  float numero1, numero2;
  
  printf("Informe um número: ");
  scanf("%f", &numero1);
  printf("Informe outro número: ");
  scanf("%f", &numero2);

  if(numero1 > numero2)
  	printf("%f é maior que %f\n", numero1, numero2);
  else if (numero1 < numero2)
  	printf("%f é menor que %f\n", numero1, numero2);
  else
    printf("%f é igual a %f\n", numero1, numero2);
  
  return 0;
}