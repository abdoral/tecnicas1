/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 5 
 * Questão 15
 * 
 * Receber 15 numeros e imprimir o log10 de cada um;
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
  
  float numero;
  int contador = 0;

  while(contador < 8) {
  	printf("Informe um número: ");
    scanf("%f", &numero);
    printf("%f\n", log10f(numero));
    contador++;
  }
  printf("\n");
  
  return 0;
}