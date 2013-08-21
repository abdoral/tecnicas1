/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 5 
 * Questão 20
 * 
 * Imprimir de 1 até 100 e a média desses numeros;
 * 
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
  
  float parcelas, soma;
  float media;
  soma = 0;
  for (parcelas = 1; parcelas <= 100; parcelas++)
  {
    soma += parcelas;
     printf("%.0f ", parcelas);
  }
  printf("\n");
  printf("Soma %.0f\n", parcelas);
  media = soma/(parcelas-1);
  printf("Média entre os números é %.2f\n", media);
  
  return 0;
}