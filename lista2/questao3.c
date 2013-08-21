/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Lista de exercício 2 
 * Questão 3
 * 
 * Algoritmo converter temperatura de Fanhereint para Celsius
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  float tempFanhereint;
  
  printf("----------------------------------------\n");
  printf("======> Industrias Tabajaras <======\n");
  printf("***Master Convex Temp Ultra Higth***\n");
  printf("Informe a temperatura em Fanhereint: ");
  scanf("%f", &tempFanhereint);
  printf("%f F é equivalente a %f C \n", tempFanhereint, (tempFanhereint-32)/1.8);
  printf("----------------------------------------\n");
  
  return 0;
}