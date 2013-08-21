/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 1 
 * Questão 4
 * 
 * Algoritmo converter temperatura de Celsius para Fanhereint 
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  float tempCelsius;
  
  printf("----------------------------------------\n");
  printf("======> Industrias Tabajaras <======\n");
  printf("***Master Convex Temp Ultra Higth***\n");
  printf("Informe a temperatura em Celsius: ");
  scanf("%f", &tempCelsius);
  printf("%f C é equivalente a %f F \n", tempCelsius, tempCelsius*1.8 +32);
  printf("----------------------------------------\n");
  
  return 0;
}