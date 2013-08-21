/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 5 
 * Questão 11
 * 
 * Receber 10 numeros e imprimir suas metades;
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  float numero;
  int contador = 0;

  while(contador < 10) {
  	printf("Informe um número: ");
    scanf("%f", &numero);
    printf("%.2f\n", numero/2);
    contador++;
  }
  printf("\n");
  
  return 0;
}