/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 13
 * 
 * Algoritmo recebe 4 números e imprime o maior e o menos deles;
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  float numero1, numero2, numero3, numero4, maior, menor;

  printf("Digite um número qualquer: ");
  scanf("%f", &numero1);
  
  maior = menor = numero1;
  
  printf("Digite um número qualquer: ");
  scanf("%f", &numero2);
  if(numero2 > maior)
  	maior = numero2;
  else if(numero2 < menor)
  	menor = numero2;

  printf("Digite um número qualquer: ");
  scanf("%f", &numero3);
  if(numero3 > maior)
  	maior = numero3;
  else if(numero3 < menor)
  	menor = numero3;
  
  printf("Digite um número qualquer: ");
  scanf("%f", &numero4);
  if(numero4 > maior)
  	maior = numero4;
  else if(numero4 < menor)
  	menor = numero4;

  printf("Os números digitados foram %.2f, %.2f, %.2f, %.2f sendo o menor o %.2f e o maior %.2f\n", numero1, numero2, numero3, numero4, menor, maior);
  
  
  return 0;
}