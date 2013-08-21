/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 19
 * 
 * Algoritmo que recebe um número imprime se ele é igual a 5, a 200, a 400, 
 * se está no intervalo entre 500 e 1000, inclusive, ou se ela está fora dos escopos 
 * anteriores
 * 
 * teste 1 => 40 não
 * teste 2 => 580 no intervalo
 * teste 3 => 1000 no intervalo
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int numero;

  printf("Digite um número qualquer: ");
  scanf("%d", &numero);
  if(numero == 5 || numero == 200 || numero == 400)
    printf("O número %d é igual a %d.\n", numero, numero);
  else if(numero <= 1000 && numero >= 500)
    printf("O número %d está entre 500 e 1000.\n", numero);
  else
  	printf("O número %d não atende a nenhum dos critérios pedidos.\n", numero);
  
  return 0;
}