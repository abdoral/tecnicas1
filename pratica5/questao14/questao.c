/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 5 
 * Questão 14
 * 
 * Receber 15 numeros e imprimir o raiz quadrada de cada um;
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
  
  float numero;
  int contador = 0;

  while(contador < 15) {
  	printf("Informe um número: ");
    scanf("%f", &numero);
    printf("%f\n", sqrt(numero));
    contador++;
  }
  printf("\n");
  
  return 0;
}