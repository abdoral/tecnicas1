/*
 * Técnicas de Progamação para Engenharia 1
 * Abdoral Timóteo de Sousa Neto - 357488
 * Prática 4 
 * Questão 18
 * 
 * Algoritmo para verificar se um número está entre 20 e 90, iprimir sim ou não.
 * 
 * teste 1 => 35 sim
 * teste 2 => 20.0001 sim
 * teste 3 => 89.999999 sim
 * teste 4 => 19.999999 não
 * teste 5 => 19.9999999 sim
 * teste 6 => 90.00001 não
 * teste 7 => 90.000003 sim
 * teste 8 => 90.000004 não
 * teste 9 => 90.0000009 sim
 * teste 10 => 100 não
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  float numero;

  printf("Digite um número qualquer: ");
  scanf("%f", &numero);
  if(numero >= 20 && numero <= 90)
    printf("O número %f está entre 20 e 90\n", numero);
  else
    printf("O número %f não está entre 20 e 90\n", numero);
  
  return 0;
}