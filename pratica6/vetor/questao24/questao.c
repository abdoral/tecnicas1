/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 6-vetores
 * Questão 24
 * 
 * Gerar o resultado de S a partir dos elementos do array;
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  
  int vetor[99], indice, contador, S = 0;

  //os valores do vetor serão os o mesmos do indice correpondente
  for (indice = 0; indice <= 100; indice++)
  {
    vetor[indice] = indice;
  }
  printf("%d\n", vetor[indice-1]);
  printf("S = ");
  for(contador = 0; contador <= 50 && indice >= 51; contador++)
  {
    S += pow(vetor[contador] - vetor[indice-1], 3.0);
    if((indice + contador) == 101)
      printf("(%d - %d)^3 + ", vetor[contador], vetor[indice-1]);
    else
      printf("(%d - %d)^3 ", vetor[contador], vetor[indice-1]);
    indice--;
  }

  printf("\n S = %d \n", S);
  
  return 0;
}