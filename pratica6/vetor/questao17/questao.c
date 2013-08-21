/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 6-vetores
 * Questão 17
 * 
 * Gerar os 50 primeiros termos da série de Fibonacci guardar em um vetor e imprimir;
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  int indice;
  long int vetor[49], auxiliar1 = 1, auxiliar2 = 0, auxilar3;
  printf("O vetor com os 50 primeiros elementos é = [");
  for(indice = 0; indice < 50; indice++) {
     auxilar3 = auxiliar1 + auxiliar2;
     auxiliar1 = auxiliar2;
     vetor[indice] = auxiliar2 = auxilar3;
     if(indice != 49) 
     	printf("%ld, ", vetor[indice]);
     else
     	printf("%ld", vetor[indice]);
  }
  printf("]\n");
  return 0;
}