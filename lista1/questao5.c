/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Lista de exercício 1 
 * Questão 5
 * 
 * Algoritmo que recebe 3 numeros reais e tira a média aritmética dos 3·
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  float numeroReal1, numeroReal2, numeroReal3;
  
  printf("Informe 3 valores reais para o cácula da média aritmética.\n");
  printf("Valor 1:");
  scanf("%f", &numeroReal1);
  printf("Valor 2:");
  scanf("%f", &numeroReal2);
  printf("Valor 3:");
  scanf("%f", &numeroReal3);
  printf("A média aritmética de %f, %f, %f é %f \n", numeroReal1, numeroReal2, numeroReal3, (numeroReal1 + numeroReal2 + numeroReal3)/3);
  return 0;
}